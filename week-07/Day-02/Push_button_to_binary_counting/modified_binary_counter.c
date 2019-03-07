#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

/* create a config structure */
GPIO_InitTypeDef LEDS;
/* create a config structure */
GPIO_InitTypeDef push_button;

int main(void) {
	HAL_Init();

	/* we need to enable the GPIOA port's clock first */
	__HAL_RCC_GPIOF_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();

	LEDS.Pin = GPIO_PIN_9 | GPIO_PIN_10 | GPIO_PIN_8 | GPIO_PIN_7; /* setting up 2 pins at once with | operator */
	LEDS.Mode = GPIO_MODE_OUTPUT_PP; /* configure as output, in push-pull mode */
	LEDS.Pull = GPIO_NOPULL; /* we don't need internal pull-up or -down resistor */
	LEDS.Speed = GPIO_SPEED_HIGH; /* we need a high-speed output */

	HAL_GPIO_Init(GPIOF, &LEDS); /* initialize the pin on GPIOF port */

	push_button.Pin = GPIO_PIN_4;
	push_button.Mode = GPIO_MODE_INPUT; /* configure as input */

	HAL_GPIO_Init(GPIOB, &push_button); /* initialize the pin on GPIOF port */

	int n = 0;
	while (1) {

		HAL_Delay(300);

		if (HAL_GPIO_ReadPin(GPIOB, push_button.Pin)) {

			n+=1;

			int shift;

			if (((n >> shift) & 1) == 1) {

				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_SET);

			} else {
				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_RESET);
			}
			shift += 1;

			if (((n >> shift) & 1) == 1) {

				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_SET);

			} else {
				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);
			}
			shift += 1;

			if (((n >> shift) & 1) == 1) {

				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);

			} else {
				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);
			}
			shift += 1;

			if (((n >> shift) & 1) == 1) {

				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);

			} else {
				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
			}
			shift = 0;

		}
	}
}

/*
 * setpin(GPIOF, GPIO_PIN_10, n, shift);
 *
 * */

/*	int counter;
 counter++;

 //1

 HAL_Delay(500);
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_SET);
 HAL_Delay(500);

 //2
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_RESET);
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_SET);
 HAL_Delay(500);

 //3
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_SET);
 HAL_Delay(500);

 //4
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_RESET);
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);
 HAL_Delay(500);

 //5
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_SET);
 HAL_Delay(500);

 //6
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_RESET);
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_SET);
 HAL_Delay(500);

 //7
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_SET);
 HAL_Delay(500);

 //8
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_RESET);
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);

 //9-15
 if (counter == 2) {

 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);

 }
 //reset all
 if (counter == 3) {

 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_RESET);
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);
 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);

 counter = 0;
 }


 }

 */

