/*
 * register.h
 *
 * Created: 4/14/2024 4:29:52 AM
 *  Author: aya abdulaziz
 * topic : Define macros for accessing AVR microcontroller registers (DDR, PIN, PORT) for ports A, B, C, D
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_

#define DDRA (*((volatile uint8_t*) 0x3A))
#define DDRB (*((volatile uint8_t*) 0x3B))
#define DDRC (*((volatile uint8_t*) 0x3C))
#define DDRD (*((volatile uint8_t*) 0x3D))

#define PINA (*((volatile uint8_t*) 0x39))
#define PINB (*((volatile uint8_t*) 0x38))
#define PINC (*((volatile uint8_t*) 0x37))
#define PIND (*((volatile uint8_t*) 0x36))

#define PORTA (*((volatile uint8_t*) 0x3A))
#define PORTB (*((volatile uint8_t*) 0x3B))
#define PORTC (*((volatile uint8_t*) 0x3C))
#define PORTD (*((volatile uint8_t*) 0x3D))



#endif /* REGISTER_H_ */