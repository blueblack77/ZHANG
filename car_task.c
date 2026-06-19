#include "car_task.h"
#include "main.h"
#include "time.h"
#include "usart.h"
#include "gpio.h"


void Left_motor_control(uint16_t speed)
{
	
	
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,GPIO_PIN_RESET);
	
	
	//????
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,speed);
}