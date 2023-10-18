/*
 * software_timer.c
 *
 *  Created on: Oct 2, 2023
 *      Author: hoang
 */
#include<software_timer.h>

int counter = 0;
int counter_8 = 0;
int flag = 0;
int flag_8 = 0;

void set_timer(int num){
	counter = num;
	flag = 0;
}
void set_timer_8(int num){
	counter_8 = num;
	flag_8 = 0;
}

void timer_run(){
	if(counter > 0){
		counter--;
		if(counter <= 0){
			flag = 1;
		}
	}
	if(counter_8 > 0){
		counter--;
		if(counter <= 0){
			flag_8 = 1;
		}
	}
}



