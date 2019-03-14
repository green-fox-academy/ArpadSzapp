#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

TIM_HandleTypeDef timer_handle;
static void Error_Handler(void);
static void SystemClock_Config(void);
void init_timer(void);

#define UART_PUTCHAR int __io_putchar(int ch)

I2C_HandleTypeDef I2C_handle;        // defining the I2C configuration structure

GPIO_InitTypeDef SCL_SDA_config; // configure GPIOs for I2C data and clock lines

UART_HandleTypeDef uart_handle;


volatile uint8_t read_temp_reg = 0;

volatile uint8_t read_temp_val;

/* 7 bit address of an I2C sensor shifted to left 1 bit, leaving place for W/R bit,
 * which is inserted by the HAL_I2C_Master_Transmit and HAL_I2C_Master_Receive */
#define TEMP_SENSOR_ADDRESS (0b1001000 << 1)

void init_uart();

int main(void) {
	HAL_Init();
	SystemClock_Config();

	init_uart();

	init_timer();
	HAL_TIM_Base_Start_IT(&timer_handle);

	__HAL_RCC_GPIOB_CLK_ENABLE()
	; /* enable GPIO clock */

	SCL_SDA_config.Pin = GPIO_PIN_8 | GPIO_PIN_9; /* PB8: SCL, PB9: SDA */
	SCL_SDA_config.Pull = GPIO_PULLUP;
	SCL_SDA_config.Mode = GPIO_MODE_AF_OD; /* configure in pen drain mode */
	SCL_SDA_config.Alternate = GPIO_AF4_I2C1;
	HAL_GPIO_Init(GPIOB, &SCL_SDA_config);

	__HAL_RCC_I2C1_CLK_ENABLE()
	; /* enable the clock of the used peripheral */

	/* defining the UART configuration structure */
	I2C_handle.Instance = I2C1;
	I2C_handle.Init.Timing = 0x40912732;
	I2C_handle.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;

	HAL_I2C_Init(&I2C_handle);



	while (1) {

		//HAL_Delay(500);

		/*HAL_I2C_Master_Transmit(&I2C_handle, TEMP_SENSOR_ADDRESS,
		 &read_temp_reg, sizeof(read_temp_reg), 100);

		 HAL_I2C_Master_Receive(&I2C_handle, TEMP_SENSOR_ADDRESS, &read_temp_val,
		 sizeof(read_temp_val), 100);
		 */

		/* or using HAL_I2C_Mem_Read():*/
		//HAL_I2C_Mem_Read(&I2C_handle, TEMP_SENSOR_ADDRESS, read_temp_reg, I2C_MEMADD_SIZE_8BIT, &read_temp_val, sizeof(read_temp_val), 100);

		//printf("\nTemperature: %d", read_temp_val);
	}
}

void TIM2_IRQHandler() {

	HAL_TIM_IRQHandler(&timer_handle);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {

	if (htim->Instance == timer_handle.Instance) { //timer_handle.Instance == TIM2

		HAL_I2C_Mem_Read(&I2C_handle, TEMP_SENSOR_ADDRESS, read_temp_reg,
		I2C_MEMADD_SIZE_8BIT, &read_temp_val, sizeof(read_temp_val), 100);
		
		printf("\nTemperature: %d", read_temp_val);
	}
}

void init_uart() {
	__HAL_RCC_USART1_CLK_ENABLE()
	;
	uart_handle.Instance = USART1;
	uart_handle.Init.BaudRate = 115200;
	uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
	uart_handle.Init.StopBits = UART_STOPBITS_1;
	uart_handle.Init.Parity = UART_PARITY_NONE;
	uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	uart_handle.Init.Mode = UART_MODE_TX_RX;

	BSP_COM_Init(COM1, &uart_handle);
	HAL_NVIC_SetPriority(USART1_IRQn, 1, 0);
	HAL_NVIC_EnableIRQ(USART1_IRQn);
}

UART_PUTCHAR {
	HAL_UART_Transmit(&uart_handle, (uint8_t*) &ch, 1, 0xFFFF);
	return ch;
}

void init_timer() {
	__HAL_RCC_TIM2_CLK_ENABLE()
	;

	HAL_TIM_Base_DeInit(&timer_handle);
	__HAL_TIM_SET_COUNTER(&timer_handle, 0);
	timer_handle.Instance = TIM2;
	timer_handle.Init.Prescaler = 54000 - 1; /* 108000000/54000=2000 -> speed of 1 count-up: 1/2000 sec = 0.5 ms */
	timer_handle.Init.Period = 1000 - 1; /* 6000 x 0.5 ms = 6 second period */
	timer_handle.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	timer_handle.Init.CounterMode = TIM_COUNTERMODE_UP;

	/* configure the timer */
	HAL_TIM_Base_Init(&timer_handle);
	HAL_NVIC_SetPriority(TIM2_IRQn, 2, 0);
	HAL_NVIC_EnableIRQ(TIM2_IRQn);
//HAL_TIM_Base_Start_IT(&timer_handle); //If i need to switch stop, i can do in the main

}

static void Error_Handler(void) {
}

static void SystemClock_Config(void) {
	RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };

	/**Configure the main internal regulator output voltage */
	__HAL_RCC_PWR_CLK_ENABLE()
	;
	__HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

	/**Initializes the CPU, AHB and APB busses clocks */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSIState = RCC_HSI_ON;
	RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
	RCC_OscInitStruct.PLL.PLLM = 8;
	RCC_OscInitStruct.PLL.PLLN = 216;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 2;

	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}

	/**Activate the Over-Drive mode */
	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
		Error_Handler();
	}

	/**Initializes the CPU, AHB and APB busses clocks */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
		Error_Handler();
	}
}
