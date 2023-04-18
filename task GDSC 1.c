/*
 * task_GDSC_1.c
 *
 * Created: 4/17/2023 6:17:44 PM
 *  Author: eslam
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
int main(void)
{
	
	led_init('A',0);
	
    while(1)
    {
		led_toggle('A',0);
		_delay_ms(1000);
        //TODO:: Please write your application code 
    }
}