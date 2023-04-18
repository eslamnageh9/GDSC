/*
 * DIO_Driver.h
 *
 * Created: 3/2/2023 5:34:39 PM
 *  Author: eslam
 */ 


#ifndef DIO_DRIVER_H_
#define DIO_DRIVER_H_

void DIO_write_nible_port(unsigned char port ,unsigned char val);//val=1 then first 4 pin each one=1 , val=0 first nible each one=0

void DIO_nible_port_dir(unsigned char port,unsigned char val);
void DIO_tog_port(unsigned char port);
unsigned char DIO_read_port(unsigned char portname);
void DIO_write_port(unsigned char portname,unsigned char portvalue);
void DIO_set_port_direction(unsigned char portname,unsigned char direction);
void DIO_toggle_pin(unsigned char portname,unsigned char pinnumber);
unsigned char DIO_u8read_pin(unsigned char portname,unsigned char pinnumber);
void DIO_write_pin(unsigned char portname,unsigned char pinnumber,unsigned char outputvalue);

void DIO_vsetPINDir(unsigned char portname,unsigned char pinnumber,unsigned char direction);

#endif /* DIO_DRIVER_H_ */