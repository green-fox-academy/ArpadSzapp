#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

int main(void) {
	HAL_Init();

	BSP_LED_Init(LED1);
	BSP_LED_Init(LED1);
	BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	BSP_LED_Init(LED1);

	int is_pressed = 0;

	while (1) {

		if (BSP_PB_GetState(BUTTON_KEY) && !is_pressed) {

			is_pressed = 1;
		}

		while (is_pressed == 1) {
			BSP_LED_Toggle(LED1);
			HAL_Delay(500);
			BSP_LED_Off(LED1);
			HAL_Delay(500);
		}
	}
}