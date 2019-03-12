#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

//  SAFE TIMING                  Declare two global variables for make safe the button push
uint32_t last_debounce_time = 0;    // the last time the output pin was toggled
const uint32_t debounce_delay = 200; // the debounce time in ms (increase if the output flickers)


//   DECLARE MY EXTERNAL BUTTON      Make the definition of my external_button
GPIO_InitTypeDef external_button;


//   VOLATILE COUNTER      what i can use while the program is working
volatile int button_push_counter = 0;

/**********************************************************************/

void init_outside_button() {
	//    init GPIO external button

	__HAL_RCC_GPIOB_CLK_ENABLE()
	;                   //gpio B clock enable

	external_button.Pin = GPIO_PIN_4;                 //pin PB4 D3 is now the button pin

	external_button.Mode = GPIO_MODE_IT_RISING;     //set the button mode to IT_RISING

	external_button.Pull = GPIO_NOPULL;           //we dont need pull at now so gpio_NOPULL

	external_button.Speed = GPIO_SPEED_FAST;    //the gpio speed is FAST

	HAL_GPIO_Init(GPIOB, &external_button); //the External button is connected now on the gpioB

	//set external button interrupt priority
	HAL_NVIC_SetPriority(EXTI4_IRQn, 4, 0); //we set the PRIORITY on the <EXTI pin 4>,       < priority from 4 >,    <>

	//enable the interrupt to HAL
	HAL_NVIC_EnableIRQ(EXTI4_IRQn);
}

/**********************************************************************/

int main(void) {
	HAL_Init();
	BSP_LED_Init(LED_GREEN);
	init_outside_button();

	while (1);
}

/**********************************************************************/

//interrupt handler
void EXTI4_IRQHandler() {
	HAL_GPIO_EXTI_IRQHandler(external_button.Pin);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
	// Check if the time elapsed since the last valid button press is less than `debounce_delay`
	uint32_t current_time = HAL_GetTick();

	if (current_time < last_debounce_time + debounce_delay) {
		// Do nothing (this is not a real button press)
		return;
	}

	button_push_counter++;
//                                       codecodecodecode                codecodecodecode                      codecodecodecode
	if (button_push_counter == 5) {

		BSP_LED_Toggle(LED1);

		button_push_counter = 0;
	}
//                                       codecodecodecode                codecodecodecode                      codecodecodecode
	last_debounce_time = current_time;

	// Continue handling the interrupt

}
