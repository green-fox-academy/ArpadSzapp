#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

int main(void) {
	HAL_Init();

	BSP_LED_Init(LED1);
	BSP_LED_Init(LED1);
	BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	BSP_LED_Init(LED1);

	while (1) {

		int is_pressed = 0;
		int reset = 0;

		while (BSP_PB_GetState(BUTTON_KEY) || reset) {

			reset = 1;

			while (is_pressed < 3) {
				BSP_LED_On(LED1);
				HAL_Delay(1000);
				BSP_LED_Off(LED1);
				HAL_Delay(1000);
				is_pressed += 1;
			}
			while (is_pressed < 6) {
				BSP_LED_On(LED1);
				HAL_Delay(500);
				BSP_LED_Off(LED1);
				HAL_Delay(500);
				is_pressed += 1;
			}
			while (is_pressed < 9) {
				BSP_LED_On(LED1);
				HAL_Delay(250);
				BSP_LED_Off(LED1);
				HAL_Delay(250);
				is_pressed += 1;
			}
			while (is_pressed < 12) {
				BSP_LED_On(LED1);
				HAL_Delay(500);
				BSP_LED_Off(LED1);
				HAL_Delay(500);
				is_pressed += 1;

			}
			is_pressed = 0;

		}

	}
}

