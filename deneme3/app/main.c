//*****************************************************************************
//
//! \file main.c
//! \brief main application
//! \version 1.0.0.0
//! \date $Creat_time$
//! \author $Creat_author$
//! \copy
//!
//! Copyright (c) 2014 CooCox.  All rights reserved.
//
//! \addtogroup project
//! @{
//! \addtogroup main
//! @{
//*****************************************************************************
#include <stm32f4xx.h>
#include <stm32f4xx_hal_rcc.h>
#include <stm32f4xx_hal_adc.h>
#include <stm32f4xx_hal_gpio.h>
//#include "stm32f4xx_hal_gpio.c"
int main(void)
{
HAL_RCC_OscConfig()
    while(1)
    {
    	HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_12);
    	HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_15);

    }
}
//! @}
//! @}
