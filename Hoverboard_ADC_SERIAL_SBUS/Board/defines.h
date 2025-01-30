#pragma once
//-----------------------------------------------------------------

#define LEFT_HALL_U_PIN GPIO_PIN_5
#define LEFT_HALL_V_PIN GPIO_PIN_6
#define LEFT_HALL_W_PIN GPIO_PIN_7

#define LEFT_HALL_U_PORT GPIOB
#define LEFT_HALL_V_PORT GPIOB
#define LEFT_HALL_W_PORT GPIOB

#define RIGHT_HALL_U_PIN GPIO_PIN_10
#define RIGHT_HALL_V_PIN GPIO_PIN_11
#define RIGHT_HALL_W_PIN GPIO_PIN_12

#define RIGHT_HALL_U_PORT GPIOC
#define RIGHT_HALL_V_PORT GPIOC
#define RIGHT_HALL_W_PORT GPIOC

#define LEFT_TIM TIM8
#define LEFT_TIM_U CCR1
#define LEFT_TIM_UH_PIN GPIO_PIN_6
#define LEFT_TIM_UH_PORT GPIOC
#define LEFT_TIM_UL_PIN GPIO_PIN_7
#define LEFT_TIM_UL_PORT GPIOA
#define LEFT_TIM_V CCR2
#define LEFT_TIM_VH_PIN GPIO_PIN_7
#define LEFT_TIM_VH_PORT GPIOC
#define LEFT_TIM_VL_PIN GPIO_PIN_0
#define LEFT_TIM_VL_PORT GPIOB
#define LEFT_TIM_W CCR3
#define LEFT_TIM_WH_PIN GPIO_PIN_8
#define LEFT_TIM_WH_PORT GPIOC
#define LEFT_TIM_WL_PIN GPIO_PIN_1
#define LEFT_TIM_WL_PORT GPIOB

#define RIGHT_TIM TIM1
#define RIGHT_TIM_U CCR1
#define RIGHT_TIM_UH_PIN GPIO_PIN_8
#define RIGHT_TIM_UH_PORT GPIOA
#define RIGHT_TIM_UL_PIN GPIO_PIN_13
#define RIGHT_TIM_UL_PORT GPIOB
#define RIGHT_TIM_V CCR2
#define RIGHT_TIM_VH_PIN GPIO_PIN_9
#define RIGHT_TIM_VH_PORT GPIOA
#define RIGHT_TIM_VL_PIN GPIO_PIN_14
#define RIGHT_TIM_VL_PORT GPIOB
#define RIGHT_TIM_W CCR3
#define RIGHT_TIM_WH_PIN GPIO_PIN_10
#define RIGHT_TIM_WH_PORT GPIOA
#define RIGHT_TIM_WL_PIN GPIO_PIN_15
#define RIGHT_TIM_WL_PORT GPIOB

#define LEFT_DC_CUR_PIN GPIO_PIN_0
#define LEFT_U_CUR_PIN GPIO_PIN_0
#define LEFT_V_CUR_PIN GPIO_PIN_3

#define LEFT_DC_CUR_PORT GPIOC
#define LEFT_U_CUR_PORT GPIOA
#define LEFT_V_CUR_PORT GPIOC

#define RIGHT_DC_CUR_PIN GPIO_PIN_1
#define RIGHT_U_CUR_PIN GPIO_PIN_4
#define RIGHT_V_CUR_PIN GPIO_PIN_5

#define RIGHT_DC_CUR_PORT GPIOC
#define RIGHT_U_CUR_PORT GPIOC
#define RIGHT_V_CUR_PORT GPIOC

#define DCLINK_PIN GPIO_PIN_2
#define DCLINK_PORT GPIOC

#define LED_PIN GPIO_PIN_2
#define LED_PORT GPIOB

#define BUZZER_PIN GPIO_PIN_4
#define BUZZER_PORT GPIOA

#define SWITCH_PIN GPIO_PIN_1
#define SWITCH_PORT GPIOA

#define OFF_PIN GPIO_PIN_5
#define OFF_PORT GPIOA

#define BUTTON_PIN GPIO_PIN_1
#define BUTTON_PORT GPIOA

#define CHARGER_PIN GPIO_PIN_12
#define CHARGER_PORT GPIOA

#define MOTOR_AMP_CONV_DC_AMP (0.02f) // A per bit (12) on ADC

#define ABS(a) (((a) < 0.0f) ? -(a) : (a))
#define LIMIT(x, min, max) (((x) > (max)) ? (max) : (((x) < (min)) ? (min) : (x)))
//-----------------------------------------------------------------

enum eCTRL_MODE
{
  eCM_ADC = 1,
  eCM_SERIAL,
  eCM_RC_SBUS
};
