#include "main.h"
#include "usart.h"
#include "tim.h"



//×ó±ßÂÖì±
void Left_motor_control(uint16_t speed)
{
	
	
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,GPIO_PIN_RESET);
	
	
	//????
	
	
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,speed);
}

//ÓÒ±ßÂÖ×Ó
void Right_motor_control(uint16_t speed)
{
	
	
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,GPIO_PIN_RESET);
	
	
	
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2,speed);
}


// ×óÂÖ·´

void F_Left_motor_control(uint16_t speed)
{
	
	
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,GPIO_PIN_SET);
	
	
	//????
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,speed);
}

//ÓÒÂÖ·´

void F_Right_motor_control(uint16_t speed)
{
	
	
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,GPIO_PIN_SET);
	
	
	//????
	__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2,speed);
}























