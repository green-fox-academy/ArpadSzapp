#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

I2C_HandleTypeDef I2C_handle;            // defining the I2C configuration structure

GPIO_InitTypeDef SCL_SDA_config;           // configure GPIOs for I2C data and clock lines

/* 7 bit address of an I2C sensor shifted to left 1 bit, leaving place for W/R bit,
 * which is inserted by the HAL_I2C_Master_Transmit and HAL_I2C_Master_Receive */
#define TEMP_SENSOR_ADDRESS (0b1001000 << 1)

int main(void)
{
    HAL_Init();

    __HAL_RCC_GPIOB_CLK_ENABLE();       /* enable GPIO clock */

    SCL_SDA_config.Pin         = GPIO_PIN_8 | GPIO_PIN_9;  /* PB8: SCL, PB9: SDA */
    SCL_SDA_config.Pull        = GPIO_PULLUP;
    SCL_SDA_config.Mode        = GPIO_MODE_AF_OD;          /* configure in pen drain mode */
    SCL_SDA_config.Alternate   = GPIO_AF4_I2C1;
    HAL_GPIO_Init(GPIOB, &SCL_SDA_config);

    __HAL_RCC_I2C1_CLK_ENABLE();        /* enable the clock of the used peripheral */

    /* defining the UART configuration structure */
    I2C_handle.Instance             = I2C1;
    I2C_handle.Init.Timing          = 0x40912732;
    I2C_handle.Init.AddressingMode  = I2C_ADDRESSINGMODE_7BIT;

    HAL_I2C_Init(&I2C_handle);

    uint8_t read_temp_reg = 0;
    uint8_t read_temp_val;

    while (1) {
        HAL_Delay(1000);

        HAL_I2C_Master_Transmit(&I2C_handle, TEMP_SENSOR_ADDRESS, &read_temp_reg, sizeof(read_temp_reg), 100);
        HAL_I2C_Master_Receive(&I2C_handle, TEMP_SENSOR_ADDRESS, &read_temp_val, sizeof(read_temp_val), 100);

        /* or using HAL_I2C_Mem_Read():
        HAL_I2C_Mem_Read(&I2C_handle, TEMP_SENSOR_ADDRESS, read_temp_reg, I2C_MEMADD_SIZE_8BIT,
		&read_temp_val, sizeof(read_temp_val), 100);
        */

        printf("Temperature: %d", read_temp_val);
    }
}