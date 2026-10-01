//
// Created by yangxiao on 2026/10/1.
//

#ifndef INC_261001LED_CALLBACK_H
#define INC_261001LED_CALLBACK_H
#include "iwdg.h"
#include "main.h"
#include "tim.h"
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef* htim);

#endif //INC_261001LED_CALLBACK_H
