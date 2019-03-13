#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

uint32_t last_debounce_time = 0;
const uint32_t debounce_delay = 150;
GPIO_InitTypeDef LEDS;
GPIO_InitTypeDef external_button;

volatile int button_push_counter = 0;
void init_outside_button_PB4_D3();
void init_outside_LEDS();
int main(void) {

	HAL_Init();

	BSP_LED_Init(LED_GREEN);

	init_outside_button_PB4_D3();
	init_outside_LEDS();

	while (1) {
		if (button_push_counter == 5) {

			BSP_LED_Toggle(LED1);
			HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_10);
			HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_9);
			HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_8);
			HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_7);
			button_push_counter = 0;
		}
	}
}
void EXTI4_IRQHandler() {
	HAL_GPIO_EXTI_IRQHandler(external_button.Pin);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {

	uint32_t current_time = HAL_GetTick();

	if (current_time < last_debounce_time + debounce_delay) {
		// Do nothing (this is not a real button press)
		return;
	}

	button_push_counter++;

	last_debounce_time = current_time;
}

void init_outside_button_PB4_D3() {

	__HAL_RCC_GPIOB_CLK_ENABLE()
	;

	external_button.Pin = GPIO_PIN_4;
	external_button.Mode = GPIO_MODE_IT_RISING;
	external_button.Pull = GPIO_NOPULL;
	external_button.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOB, &external_button);

	//set external button interrupt priority
	HAL_NVIC_SetPriority(EXTI4_IRQn, 4, 0); //we set the PRIORITY on the <EXTI pin 4>,       < priority from 4 >,    <>

	//enable the interrupt to HAL
	HAL_NVIC_EnableIRQ(EXTI4_IRQn);
}
void init_outside_LEDS() {

	__HAL_RCC_GPIOF_CLK_ENABLE();

	LEDS.Pin = GPIO_PIN_7 |GPIO_PIN_8 |GPIO_PIN_9 | GPIO_PIN_10; /* setting up 2 pins at once with | operator */
	LEDS.Mode = GPIO_MODE_OUTPUT_PP; /* configure as output, in push-pull mode */
	LEDS.Pull = GPIO_NOPULL; /* we don't need internal pull-up or -down resistor */
	LEDS.Speed = GPIO_SPEED_HIGH; /* we need a high-speed output */

	HAL_GPIO_Init(GPIOF, &LEDS); /* initialize the pin on GPIOF port */

}

