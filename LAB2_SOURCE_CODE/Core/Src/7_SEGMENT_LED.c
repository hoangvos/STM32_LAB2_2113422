/*
 * 7_SEGMENT_LED.c
 *
 *  Created on: Oct 2, 2023
 *      Author: hoang
 */
#include<7_SEGMENT_LED.h>
#include<main.h>
#include<stdint.h>
#include<stm32f103x6.h>
#include<string.h>
#include<stdlib.h>

void display7SEG(int num){
	switch(num){
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


void init_led8x8(
		struct led8x8* led,
		uint16_t col_0,
		uint16_t col_1,
		uint16_t col_2,
		uint16_t col_3,
		uint16_t col_4,
		uint16_t col_5,
		uint16_t col_6,
		uint16_t col_7,
		uint16_t row_0,
		uint16_t row_1,
		uint16_t row_2,
		uint16_t row_3,
		uint16_t row_4,
		uint16_t row_5,
		uint16_t row_6,
		uint16_t row_7,
		GPIO_TypeDef* col_port,
		GPIO_TypeDef* row_port,
		uint8_t cur_matrix_buffer[],
		int max_size_buffer){
	led->col[0] = col_0;
	led->col[1] = col_1;
	led->col[2] = col_2;
	led->col[3] = col_3;
	led->col[4] = col_4;
	led->col[5] = col_5;
	led->col[6] = col_6;
	led->col[7] = col_7;
	led->row[0] = row_0;
	led->row[1] = row_1;
	led->row[2] = row_2;
	led->row[3] = row_3;
	led->row[4] = row_4;
	led->row[5] = row_5;
	led->row[6] = row_6;
	led->row[7] = row_7;
	led->col_port = col_port;
	led->row_port = row_port;
	led->cur_matrix_buffer = (uint8_t*)malloc(8* sizeof(uint8_t));
	led->cur_matrix_buffer = cur_matrix_buffer;
	led->index_buffer = 0;
	led->index_led_matrix = 0;
	led->index_buffer = 0;
	led->max_size_buffer = max_size_buffer;
}


void clear_Led_8x8(struct led8x8* led){
	for(int i = 0; i < 8; i++){
		HAL_GPIO_WritePin(led->col_port, led->col[i], SET);
		HAL_GPIO_WritePin(led->row_port, led->row[i], SET);
	}
}

void scanRowMatrix(struct led8x8* led){
	for(int i = 0; i < 8; i++){
		if((led->cur_matrix_buffer[led->index_led_matrix] >> i) & 0x01){
			HAL_GPIO_WritePin(led->row_port, led->row[i], RESET);
		}
	}
}
void updateCurBuffer(struct led8x8* led){
	led->index_buffer += 1;
	if(led->index_buffer + 8 <= led->max_size_buffer){
		led->cur_matrix_buffer += sizeof(uint8_t);
	}
	else if(led->index_buffer < led->max_size_buffer){
		led->cur_matrix_buffer += sizeof(uint8_t);
		led->cur_matrix_buffer[8] = 0x00;
	}
	else {
		led->cur_matrix_buffer -= (led->index_buffer - 1)* sizeof(uint8_t);
		led->index_buffer = 0;
	}
}

void updateLEDMatrix(struct led8x8* led) {
	clear_Led_8x8(led);
	clear_Led_8x8(led);
	switch(led->index_led_matrix){
		case 0:
			HAL_GPIO_WritePin(led->col_port, led->col[0], RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(led->col_port, led->col[1], RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(led->col_port, led->col[2], RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(led->col_port, led->col[3], RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(led->col_port, led->col[4], RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(led->col_port, led->col[5], RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(led->col_port, led->col[6], RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(led->col_port, led->col[7], RESET);
			break;
		default:
			break;
	}
	scanRowMatrix(led);
	led->index_led_matrix++;
}

