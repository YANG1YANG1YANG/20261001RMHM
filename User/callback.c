//
// Created by yangxiao on 2026/10/1.
//
// #include "iwdg.h"
#include "main.h"
#include "tim.h"
extern volatile uint8_t requested_mode;
extern volatile uint8_t first_enter;

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
    if (GPIO_Pin == GPIO_PIN_2) {
        static uint32_t last_time=0;
        static uint8_t first_key=1;
        uint32_t now=HAL_GetTick();
        if (first_key||now-last_time>=30) {
            requested_mode=(requested_mode+1U)%3U;
            first_key=0;
            first_enter=1;
            last_time=now;
        }
    }
}

// void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef* htim) {
//     if (htim == &htim1) {
//         HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
//     }
// }