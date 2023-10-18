/*
 * 7_SEGMENT_LED.h
 *
 *  Created on: Oct 2, 2023
 *      Author: hoang
 */

#ifndef INC_7_SEGMENT_LED_H_
#define INC_7_SEGMENT_LED_H_
#include<stdint.h>
#include<stm32f103x6.h>
#include<string.h>

struct led8x8{
	GPIO_TypeDef* col_port;
	GPIO_TypeDef* row_port;
	uint16_t col[8];
	uint16_t row[8];
	uint8_t* cur_matrix_buffer;
	uint8_t* next_matix_buffer;
	int index_led_matrix;
	int index_buffer;
	int max_size_buffer;
};

void display7SEG(int num);
void clear_Led_8x8(struct led8x8* led);
void scanRowMatrix(struct led8x8* led);
void updateCurBuffer(struct led8x8* led);
void updateLEDMatrix(struct led8x8* led);
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
		uint8_t* cur_matrix_buffer,
		int max_size_buffer);

#endif /* INC_7_SEGMENT_LED_H_ */
