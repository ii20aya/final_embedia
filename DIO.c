/*
 * DIO.c
 *
 * Created: 4/14/2024 4:28:29 AM
 *  Author: aya abdulaziz
 * topic : Implement the functions declared in DIO.h.
 */ 

#include <avr/io.h>
#include "bitMath.h"
#include "stdTypes.h"
#include "register.h"


void pinMode(uint8_t port ,chauint8_t  port_pin, uint8_t state){ // direction mean bin is input or output //0 1

switch(port){
	case 'B':
	case 'b':
	 if(state==1) //output
        {SET_BIT(DDRB,port_pin);}
	 else
        {CLEAR_BIT(DDRB,port_pin);}
	break;
	
	case 'C':
	case 'c':
	 if(state==1) //output
         {SET_BIT(DDRC,port_pin);}
	 else
         {CLEAR_BIT(DDRC,port_pin);}
	break;
	
	
	case 'D':
	case 'd':
	 if(state==1) //output
        {SET_BIT(DDRD,port_pin);}
	 else
        {CLEAR_BIT(DDRD,port_pin);}
	break;
	
	default:
	break;
}
}	


//////////////////////////////////////////////////////////////////////////////


void digitalWrite(uint8_t port , uint8_t port_pin,  uint8_t state) { 
switch(port){
	
	case 'B':
	case 'b':
	  if(state ==1) //output
          {SET_BIT(PORTB,port_pin);}
	  else
          {CLEAR_BIT(PORTB,port_pin);}
	break;
	
	
	case 'C':
	case 'c':
	  if(state ==1) 
          {SET_BIT(PORTC,port_pin);}
	  else
          {CLEAR_BIT(PORTC,port_pin);}
	break;
	
	
	case 'D':
	case 'd':
	  if(state ==1) //output
          {SET_BIT(PORTD,port_pin);}
	  else
          {CLEAR_BIT(PORTD,port_pin);}
	break;
	
	default:
	break;
}
}

//////////////////////////////////////////////////////////////////////////////

 
 unsigned char digitalRead(uint8_t port , uint8_t port_pin){
	 unsigned char res=0;
	 switch(port){
		 case 'B':
		 case 'b':
		 res=READ_BIT(PINB , port_pin);
		 break;
		 
		 
		 case 'C':
		 case 'c':
		res=READ_BIT(PINC, port_pin);
		break;
		 
		 case 'D':
		 case 'd':
		 res=READ_BIT(PIND, port_pin);
		 break;
		 
		 default:
		 break;
		 
	 }
	 
	 return res;
	 
 }
 
 //////////////////////////////////////////////////////////////////////////////
 
 
 void digitalToggle(uint8_t port , uint8_t pin){
	 switch(port){
		
		 case 'B':
		 case'b':
		 TOGGLE_BIT(PORTB,pin);
		 break;
		 
		 case 'C':
		 case'c':
		 TOGGLE_BIT(PORTC,pin);
		 break;
		 
		 case 'D':
		 case 'd':
		 TOGGLE_BIT(PORTD,pin);
		 break;
		 
		 default:
		 break;
		 
	 }
 }