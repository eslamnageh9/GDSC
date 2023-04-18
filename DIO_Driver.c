/*
 * DIO_Driver.c
 *
 * Created: 3/2/2023 5:13:40 PM
 *  Author: eslam
 */ 


#include <avr/io.h>
#include "std_macros.h"
void DIO_vsetPINDir(unsigned char portname,unsigned char pinnumber,unsigned char direction)
{
	switch(portname)
	{
		
		
		case 'A':
		case 'a':
		if(direction==1)
		{
			SET_BIT(DDRA,pinnumber);//Set the direction of the given pin in port A as output
		}
		else
		{
			CLR_BIT(DDRA,pinnumber);//Set the direction of the given pin in port A as input
		}
		break;
		case 'B':
		case 'b':
		if(direction==1)
		{
			SET_BIT(DDRB,pinnumber);//Set the direction of the given pin in port B as output
		}
		else
		{
			CLR_BIT(DDRB,pinnumber);//Set the direction of the given pin in port B as input
		}
		break;
		case 'C':
		case 'c':
		if(direction==1)
		{
			SET_BIT(DDRC,pinnumber);//Set the direction of the given pin in port C as output
		}
		else
		{
			CLR_BIT(DDRC,pinnumber);//Set the direction of the given pin in port C as input
		}
		break;
		case 'D':
		case 'd':
		if(direction==1)
		{
			SET_BIT(DDRD,pinnumber);//Set the direction of the given pin in port D as output
		}
		else
		{
			CLR_BIT(DDRD,pinnumber);//Set the direction of the given pin in port D as input
		}
		break;
		default:
		break;
	}
}


void DIO_write_pin(unsigned char portname,unsigned char pinnumber,unsigned char outputvalue)
{
	switch(portname)
	{
		case 'A' :
		case 'a':
		if(outputvalue==1)
		{
			SET_BIT(PORTA,pinnumber);//Set the value of the given pin in port A as High
		}
		else
		{
			CLR_BIT(PORTA,pinnumber);//Set the value of the given pin in port A as Low
		}
		break ;
		case 'B':
		case 'b':
		if(outputvalue==1)
		{
			SET_BIT(PORTB,pinnumber);//Set the value of the given pin in port B as High
		}
		else
		{
			CLR_BIT(PORTB,pinnumber);//Set the value of the given pin in port B as Low
		}
		break ;
		case 'C' :
		case 'c':
		if(outputvalue==1)
		{
			SET_BIT(PORTC,pinnumber);//Set the value of the given pin in port C as High
		}
		else
		{
			CLR_BIT(PORTC,pinnumber);//Set the value of the given pin in port C as Low
		}
		break ;
		case 'D':
		case 'd':
		if(outputvalue==1)
		{
			SET_BIT(PORTD,pinnumber);//Set the value of the given pin in port D as High
		}
		else
		{
			CLR_BIT(PORTD,pinnumber);//Set the value of the given pin in port D as Low
		}
		break ;
		default: break ;
	}
}


unsigned char DIO_u8read_pin(unsigned char portname,unsigned char pinnumber)
{
	unsigned char return_value=0;
	switch(portname)
	{
		case 'A' :
		case 'a':
		return_value=READ_BIT(PINA,pinnumber);//Read the value from the given pin in port A
		break;
		
		case 'B' :
		case 'b':
		return_value=READ_BIT(PINB,pinnumber);//Read the value from the given pin in port B
		break;
		
		case 'C' :
		case 'c':
		return_value=READ_BIT(PINC,pinnumber);//Read the value from the given pin in port C
		break;
		
		case 'D' :
		case 'd':
		return_value=READ_BIT(PIND,pinnumber);//Read the value from the given pin in port D
		break;
		default:
		break;
	}
	return return_value ;
}
void DIO_toggle_pin(unsigned char portname,unsigned char pinnumber)
{
	switch(portname)
	{
		case 'A':
		case 'a':
		TOG_BIT(PORTA,pinnumber);//Toggle the value of the given pin in port A
		break;
		case 'B':
		case 'b':
		TOG_BIT(PORTB,pinnumber);//Toggle the value of the given pin in port B
		break;
		case 'C':
		case 'c':
		TOG_BIT(PORTC,pinnumber);//Toggle the value of the given pin in port C
		break;
		case 'D':
		case 'd':
		TOG_BIT(PORTD,pinnumber);//Toggle the value of the given pin in port D
		break;
		default: break;
	}
}
void DIO_set_port_direction(unsigned char portname,unsigned char direction)
{
	switch(portname)
	{
		case 'A' :
		case 'a':
		DDRA=direction; //set the direction of port A
		break ;
		case 'B':
		case 'b':
		DDRB=direction; //set the direction of port B
		break ;
		case 'C' :
		case 'c':
		DDRC=direction; //set the direction of port C
		break ;
		case 'D':
		case 'd':
		DDRD=direction; //set the direction of port D
		break ;
		default:
		break ;
	}
	
}
void DIO_write_port(unsigned char portname,unsigned char portvalue)
{
	switch(portname)
	{
		case 'A' :
		case 'a':			
		PORTA=portvalue; //Write the given value to the port A
		break ;
		case 'B':
		case 'b':
		PORTB=portvalue; //Write the given value to the port B
		break ;
		case 'C' :
		case 'c':
		PORTC=portvalue; //Write the given value to the port C
		break ;
		case 'D':
		case 'd':
		PORTD=portvalue; //Write the given value to the port D
		break ;
		default:
		break ;
	}
}

unsigned char DIO_read_port(unsigned char portname)
{
	unsigned char return_val=0;
	switch(portname)
	{
		case 'A' :
		case 'a':
		return_val=PINA; // read the value of port A
		break ;
		case 'B':
		case 'b':
		return_val=PINB; // read the value of port B
		break ;
		case 'C' :
		case 'c':
		return_val=PINC; // read the value of port C
		break ;
		case 'D':
		case 'd':
		return_val=PIND; // read the value of port D
		break ;
		default:
		break ;
	}
	return return_val;
}
void DIO_tog_port(unsigned char port)
{
	switch (port)
	{
		case 'A':
		case 'a':
		PORTA=~PORTA;
		//PORTA^=0xff;
		break;
		case 'B':
		case 'b':
		PORTB=~PORTB;
		//PORTA^=0xff;
		break;
		case 'C':
		case 'c':
		PORTC=~PORTC;
		//PORTA^=0xff;
		break;
		case 'D':
		case 'd':
		PORTD=~PORTD;
		//PORTA^=0xff;
		break;
		default: break;
	}
}
void DIO_nible_port_dir(unsigned char port,unsigned char val)
{
	switch(port)
	{
		case 'A':
		case 'a':
		if (val==1)
		{
			DDRA=0x0f;
		}
		else
		{
			DDRA=0x00;
		}
		break;
		case 'B':
		case 'b':
		if (val==1)
		{
			DDRB=0x0f;
		}
		else
		{
			DDRB=0x00;
		}
		break;
		case 'C':
		case 'c':
		if (val==1)
		{
			DDRC=0x0f;
		}
		else
		{
			DDRC=0x00;
		}
		break;
		case 'D':
		case 'd':
		if (val==1)
		{
			DDRD=0x0f;
		}
		else
		{
			DDRD=0x00;
		}
		break;
	}
	
}
void DIO_write_nible_port(unsigned char port ,unsigned char val)//val=1 then first 4 pin each one=1 , val=0 first nible each one=0
{
	
	switch(port)
	{
		case 'A':
		case 'a':
		if (val==1)
		{
			PORTA=0x0f;
		}
		else
		{
			PORTA=0x00;
		}
		break;
		case 'B':
		case 'b':
		if (val==1)
		{
			PORTB=0x0f;
		}
		else
		{
			PORTB=0x00;
		}
		break;
		case 'C':
		case 'c':
		if (val==1)
		{
			PORTC=0x0f;
		}
		else
		{
			PORTC=0x00;
		}
		break;
		case 'D':
		case 'd':
		if (val==1)
		{
			PORTD=0x0f;
		}
		else
		{
			PORTD=0x00;
		}
		break;
		default: break;
	}
}
