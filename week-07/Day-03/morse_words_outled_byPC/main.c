#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
#include <stdio.h>
#include <string.h>

#define UART_PUTCHAR int __io_putchar(int ch)

GPIO_InitTypeDef GPIOTxConfig;
GPIO_InitTypeDef GPIORxConfig;
GPIO_InitTypeDef LEDS;
UART_HandleTypeDef UartHandle;
void short_morse();
void long_morse();
int main(void) {
	HAL_Init();

	/* we need to enable the GPIOA port's clock first */
	__HAL_RCC_GPIOF_CLK_ENABLE()
	;

	LEDS.Pin = GPIO_PIN_9 | GPIO_PIN_10; /* setting up 2 pins at once with | operator */
	LEDS.Mode = GPIO_MODE_OUTPUT_PP; /* configure as output, in push-pull mode */
	LEDS.Pull = GPIO_NOPULL; /* we don't need internal pull-up or -down resistor */
	LEDS.Speed = GPIO_SPEED_HIGH; /* we need a high-speed output */

	HAL_GPIO_Init(GPIOF, &LEDS); /* initialize the pin on GPIOF port */

	/* enable GPIO clock */
	__HAL_RCC_GPIOA_CLK_ENABLE()
	;
	__HAL_RCC_GPIOB_CLK_ENABLE()
	;

	/* configure GPIO for UART transmit line */
	GPIOTxConfig.Pin = GPIO_PIN_9;
	GPIOTxConfig.Mode = GPIO_MODE_AF_PP;
	GPIOTxConfig.Pull = GPIO_NOPULL;
	GPIOTxConfig.Speed = GPIO_SPEED_FAST;
	GPIOTxConfig.Alternate = GPIO_AF7_USART1;

	HAL_GPIO_Init(GPIOA, &GPIOTxConfig);

	/* configure GPIO for UART receive line */
	GPIORxConfig.Pin = GPIO_PIN_7;
	GPIORxConfig.Mode = GPIO_MODE_AF_PP;
	GPIOTxConfig.Pull = GPIO_NOPULL;
	GPIORxConfig.Speed = GPIO_SPEED_FAST;
	GPIORxConfig.Alternate = GPIO_AF7_USART1;

	HAL_GPIO_Init(GPIOB, &GPIORxConfig);

	/* enable the clock of the used peripherial instance */
	__HAL_RCC_USART1_CLK_ENABLE()
	;

	/* defining the UART configuration structure */
	UartHandle.Instance = USART1;
	UartHandle.Init.BaudRate = 115200;
	UartHandle.Init.WordLength = UART_WORDLENGTH_8B;
	UartHandle.Init.StopBits = UART_STOPBITS_1;
	UartHandle.Init.Parity = UART_PARITY_NONE;
	UartHandle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	UartHandle.Init.Mode = UART_MODE_TX_RX;

	HAL_UART_Init(&UartHandle);

	__HAL_RCC_GPIOF_CLK_ENABLE()
	;

	LEDS.Pin = GPIO_PIN_9 | GPIO_PIN_10; /* setting up 2 pins at once with | operator */
	LEDS.Mode = GPIO_MODE_OUTPUT_PP; /* configure as output, in push-pull mode */
	LEDS.Pull = GPIO_NOPULL; /* we don't need internal pull-up or -down resistor */
	LEDS.Speed = GPIO_SPEED_HIGH; /* we need a high-speed output */

	HAL_GPIO_Init(GPIOF, &LEDS); /* initialize the pin on GPIOF port */

	char morsearray[50];

	while (1) {

		memset(morsearray, '\0', 50);

		HAL_UART_Receive(&UartHandle, (uint8_t*) morsearray, sizeof(morsearray),
				100);

		for (int i = 0; i < sizeof(morsearray) / sizeof(morsearray[0]); i++) {

			if (morsearray[i] == 'A' || morsearray[i] == 'a') {
				short_morse(1);
				long_morse(1);
			} else if (morsearray[i] == 'B' || morsearray[i] == 'b') {
				long_morse(1);
				short_morse(3);
			} else if (morsearray[i] == 'C' || morsearray[i] == 'c') {
				long_morse(1);
				short_morse(1);
				long_morse(1);
				short_morse(1);
			} else if (morsearray[i] == 'D' || morsearray[i] == 'd') {
				long_morse(1);
				short_morse(2);
			} else if (morsearray[i] == 'E' || morsearray[i] == 'e') {
				short_morse(1);
			} else if (morsearray[i] == 'F' || morsearray[i] == 'f') {
				short_morse(2);
				long_morse(1);
				short_morse(1);
			} else if (morsearray[i] == 'G' || morsearray[i] == 'g') {
				long_morse(2);
				short_morse(1);
			} else if (morsearray[i] == 'H' || morsearray[i] == 'h') {
				short_morse(4);
			} else if (morsearray[i] == 'I' || morsearray[i] == 'i') {
				short_morse(2);
			} else if (morsearray[i] == 'J' || morsearray[i] == 'j') {
				short_morse(1);
				long_morse(3);
			} else if (morsearray[i] == 'K' || morsearray[i] == 'k') {
				long_morse(1);
				short_morse(1);
				long_morse(1);
			} else if (morsearray[i] == 'L' || morsearray[i] == 'l') {
				short_morse(1);
				long_morse(1);
				short_morse(2);
			} else if (morsearray[i] == 'M' || morsearray[i] == 'm') {
				long_morse(2);
			} else if (morsearray[i] == 'N' || morsearray[i] == 'n') {
				long_morse(1);
				short_morse(1);
			} else if (morsearray[i] == 'O' || morsearray[i] == 'o') {
				long_morse(3);
			} else if (morsearray[i] == 'P' || morsearray[i] == 'p') {
				short_morse(1);
				long_morse(2);
				short_morse(1);
			} else if (morsearray[i] == 'Q' || morsearray[i] == 'q') {
				long_morse(2);
				short_morse(1);
				long_morse(1);
			} else if (morsearray[i] == 'R' || morsearray[i] == 'r') {
				short_morse(1);
				long_morse(1);
				short_morse(1);
			} else if (morsearray[i] == 'S' || morsearray[i] == 's') {
				short_morse(3);
			} else if (morsearray[i] == 'T' || morsearray[i] == 't') {
				long_morse(1);
			} else if (morsearray[i] == 'U' || morsearray[i] == 'u') {
				short_morse(2);
				long_morse(1);
			} else if (morsearray[i] == 'V' || morsearray[i] == 'v') {
				short_morse(3);
				long_morse(1);
			} else if (morsearray[i] == 'W' || morsearray[i] == 'w') {
				short_morse(1);
				long_morse(1);
			} else if (morsearray[i] == 'X' || morsearray[i] == 'x') {
				long_morse(1);
				short_morse(2);
				long_morse(1);
			} else if (morsearray[i] == 'Y' || morsearray[i] == 'y') {
				long_morse(1);
				short_morse(1);
				long_morse(2);
			} else if (morsearray[i] == 'Z' || morsearray[i] == 'z') {
				long_morse(2);
				short_morse(2);
			}else{}if (morsearray[i] == ' '){
				HAL_Delay(1000);
			}
		}
	}
}

void short_morse(int n) {
	for (int i = 0; i < n; ++i) {
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET); /* setting the pin to 1 */
		HAL_Delay(250);
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET); /* setting the pin to 1 */
		HAL_Delay(250);
	}
}

void long_morse(int n) {
	for (int i = 0; i < n; ++i) {
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET); /* setting the pin to 1 */
		HAL_Delay(750);
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET); /* setting the pin to 1 */
		HAL_Delay(750);
	}
}
UART_PUTCHAR {
	HAL_UART_Transmit(&UartHandle, (uint8_t*) &ch, 1, 0xFFFF);
	return ch;
}
