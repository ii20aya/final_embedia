/*
 * DIO.h
 *
 * Created: 4/14/2024 4:28:40 AM
 *  Author: aya abdulaziz
  * topic : Declare function prototypes for pinMode, digitalWrite, digitalRead, and digitalToggle
 */ 


void pinMode(uint8_t port ,uint8_t port_pin, uint8_t state);

void digitalWrite(uint8_t port , uint8_t port_pin,  uint8_t state) ;

unsigned char digitalRead(uint8_t port , uint8_t port_pin);

void digitalToggle(uint8_t port , uint8_t pin);

