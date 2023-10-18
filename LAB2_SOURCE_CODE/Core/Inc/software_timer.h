/*
 * software_timer.h
 *
 *  Created on: Oct 2, 2023
 *      Author: hoang
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int counter;
extern int flag;
extern int counter_8;
extern int flag_8;


void timer_run();
void set_timer(int num);
void set_timer_8(int num);


#endif /* INC_SOFTWARE_TIMER_H_ */
