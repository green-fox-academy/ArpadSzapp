#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

int main(void) {
	HAL_Init();

	BSP_LED_Init(LED1);
	BSP_LED_Init(LED1);
	BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	BSP_LED_Init(LED1);

	int is_pressed = 5;

	while (1) {
		
		HAL_Delay(100);
		int button_pressed = 0;

		while (BSP_PB_GetState(BUTTON_KEY)) {

			button_pressed++;

			if (button_pressed == 1) {
				is_pressed--;
			}

			if (is_pressed == 0) {

				BSP_LED_On(LED1);
			}
		}
	}
}