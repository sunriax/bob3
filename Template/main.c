/* -------------------------------------
 * SUNriaX Project
 * www.sunriax.at
 * -------------------------------------
 * Hardware: BOB3
 * Platform: ATmega88
 * -------------------------------------
 * Name: Template
 * Ver.: 1.0 Release
 * Type: Executable
 * Text: Demo application for Bob3
 *       programming with Atmel Studio
 * -------------------------------------
 */

// Systemclock and wait statement
#define F_CPU 8000000UL
#define WAIT 250

// Setup EYE of Bob3
#define EYE_L PB1
#define EYE_R PB2
#define LED_R PD6
#define LED_G PD5
#define LED_B PD3

// System Libraries
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	// Initialize Data Direction Registers
	DDRB |= (1<<EYE_R) | (1<<EYE_L);
	DDRD |= (1<<LED_R) | (1<<LED_G) | (1<<LED_B);
  
	// Turn eyes off
	PORTB &= ~((1<<EYE_L) | (1<<EYE_R));
	PORTD &= ~((1<<LED_R) | (1<<LED_G) | (1<<LED_B));
	
	while (1)
	{	
		// Display eyes in different colors
		  
		// Activate right eye
		PORTB |= (1<<EYE_R);
		PORTB &= ~(1<<EYE_L);
		  
		// Turn green and blue LED off and red LED on
		PORTD |= (1<<LED_G) | (1<<LED_B);
		PORTD &= ~(1<<LED_R);
		  
		// Wait statement
		_delay_ms(WAIT);
		  
		// Turn red and blue LED off and green LED on
		PORTD |= (1<<LED_R) | (1<<LED_B);
		PORTD &= ~(1<<LED_G);
		  
		// Wait statement
		_delay_ms(WAIT);
		  
		// Turn red and green LED off and blue LED on
		PORTD |= (1<<LED_R) | (1<<LED_G);
		PORTD &= ~(1<<LED_B);
		  
		// Wait statement
		_delay_ms(WAIT);
		  
		// Activate left eye
		PORTB |= (1<<EYE_L);
		PORTB &= ~(1<<EYE_R);
		
		// Turn green and blue LED off and red LED on
		PORTD |= (1<<LED_G) | (1<<LED_B);
		PORTD &= ~(1<<LED_R);
		
		// Wait statement
		_delay_ms(WAIT);
		
		// Turn red and blue LED off and green LED on
		PORTD |= (1<<LED_R) | (1<<LED_B);
		PORTD &= ~(1<<LED_G);
		
		// Wait statement
		_delay_ms(WAIT);
		
		// Turn red and green LED off and blue LED on
		PORTD |= (1<<LED_R) | (1<<LED_G);
		PORTD &= ~(1<<LED_B);
		
		// Wait statement
		_delay_ms(WAIT);
	}
}