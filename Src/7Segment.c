/*
 * 7Segment.c
 *
 *  Created on: Oct 2, 2023
 *      Author: ADMIN
 */
#include "main.h"

const int MAX_LED = 4;
int led_buffer[4] = {0,1,2,3};

void display7SEG(int num)
{
	HAL_Init();
	switch(num)
	{
		case 0:
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
			break;
		case 1:
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
			break;
		case 2:
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
		case 3:
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
		case 4:
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
		case 5:
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
		case 6:
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
		case 7:
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
			break;
		case 8:
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
		case 9:
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
	}
}

void update7SEG(int index)
{
	switch (index)
	{
		case 0:
			 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7|GPIO_PIN_8| GPIO_PIN_9, SET);
			 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET);
			break;
		case 1:
			 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6|GPIO_PIN_8| GPIO_PIN_9, SET);
			 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
			break;
		case 2:
			 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7|GPIO_PIN_6| GPIO_PIN_9, SET);
			 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7|GPIO_PIN_8| GPIO_PIN_6, SET);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
			break;
	}
	display7SEG(led_buffer[index]);
}

void updateClockBuffer(int hour, int minute)
{
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}
