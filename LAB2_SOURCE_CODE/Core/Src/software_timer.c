/*
 * software_timer.c
 *
 *  Created on: Oct 2, 2023
 *      Author: hoang
 */
#include<software_timer.h>

int counter = 0;
int flag = 0;

void set_timer(int num){
	counter = num;
	flag = 0;
}

void timer_run(){
	if(counter > 0){
		counter--;
		if(counter <= 0){
			flag = 1;
		}
	}
}



