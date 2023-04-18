/*
 * LED.h
 *
 * Created: 3/9/2023 5:35:39 PM
 *  Author: eslam
 */ 


#ifndef LED_H_
#define LED_H_



void led_init(unsigned char port , unsigned pinnumber);
void led_turn_on(unsigned char port,unsigned char pinnumber);
void led_turn_off(unsigned char port,unsigned char pinnumber);
void led_toggle(unsigned char port , unsigned char pinnumber);
unsigned char led_read_status(unsigned char port , unsigned char pinnumber);
void led_port_init(unsigned char port);

#endif /* LED_H_ */