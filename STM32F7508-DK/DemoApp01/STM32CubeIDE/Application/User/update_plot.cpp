/*
 * update_plot.cpp
 *
 *  Created on: Aug 4, 2022
 *      Author: AW
 */

#include "main.h"
#include "bh1750_config.h"

extern "C" void UpdatePlot(void);

#ifdef UART_DEBUG
#include <string.h>
#include <stdio.h>

extern UART_HandleTypeDef huart1;
#endif

static float light_readout = 0.0f;

void UpdatePlot(void)
{
  light_readout = BH1750_ReadIlluminance_lux(&hbh1750_1);
#ifdef UART_DEBUG
  static char light_str[32];
  sprintf(light_str, "%d\r\n", (int)light_readout);
  HAL_UART_Transmit(&huart1, (uint8_t*)light_str, strlen(light_str), 100);
#endif
}

float LightReadout(void)
{
	return light_readout;
}
