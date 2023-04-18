/*
 * LED.c
 *
 * Created: 3/9/2023 5:35:18 PM
 *  Author: eslam
 */ 
#include "DIO_Driver.h"
void led_init(unsigned char port , unsigned pinnumber)
{
	DIO_vsetPINDir(port,pinnumber,1);
}
void led_turn_on(unsigned char port,unsigned char pinnumber)
{
	DIO_write_pin(port,pinnumber,1);
}
void led_turn_off(unsigned char port,unsigned char pinnumber)
{
	DIO_write_pin(port,pinnumber,0);
}
void led_toggle(unsigned char port , unsigned char pinnumber)
{
	DIO_toggle_pin(port,pinnumber);
}
unsigned char led_read_status(unsigned char port , unsigned char pinnumber)
{
	return DIO_u8read_pin(port,pinnumber);
}
void led_port_init(unsigned char port)
{
	unsigned char i ;
	for (i=0;i<8;i++)
	{
		DIO_vsetPINDir(port,i,1);
	}
}