



#ifndef __car_H
#define __car_H

#include "stm32f1xx_hal.h"


void Left_motor_control(uint16_t speed);

void Right_motor_control(uint16_t speed);

void F_Left_motor_control(uint16_t speed);

void F_Right_motor_control(uint16_t speed);


#endif