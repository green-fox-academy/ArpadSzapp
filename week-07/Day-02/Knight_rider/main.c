#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

/* create a config structure */
GPIO_InitTypeDef LEDS;

int main(void) {
	HAL_Init();

	/* we need to enable the GPIOA port's clock first */
	__HAL_RCC_GPIOF_CLK_ENABLE()
	;

	LEDS.Pin = GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10; /* setting up 2 pins at once with | operator */
	LEDS.Mode = GPIO_MODE_OUTPUT_PP; /* configure as output, in push-pull mode */
	LEDS.Pull = GPIO_NOPULL; /* we don't need internal pull-up or -down resistor */
	LEDS.Speed = GPIO_SPEED_HIGH; /* we need a high-speed output */

	HAL_GPIO_Init(GPIOF, &LEDS); /* initialize the pin on GPIOF port */

	uint16_t led[5] = { GPIO_PIN_7, GPIO_PIN_8, GPIO_PIN_9, GPIO_PIN_10 };

	int j;
	int i;

	while (1) {


		for (i = -1; i < 6; i++) {

			HAL_GPIO_WritePin(GPIOF, led[i], GPIO_PIN_SET); /* setting the pin to 1 */
			HAL_Delay(30);
			HAL_GPIO_WritePin(GPIOF, led[i], GPIO_PIN_RESET); /* setting the pin to 1 */


		}

		for (j = 6; j >= -1; j--) {
			HAL_GPIO_WritePin(GPIOF, led[j], GPIO_PIN_SET); /* setting the pin to 1 */
			HAL_Delay(30);
			HAL_GPIO_WritePin(GPIOF, led[j], GPIO_PIN_RESET); /* setting the pin to 1 */

		}
	}
}

