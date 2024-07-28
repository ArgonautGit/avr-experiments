#include <avr/io.h>
//#include <util/delay.h>
#include <avr/interrupt.h>

#define INPUT_PORT PORTB
#define INPUT_PIN PORTB3
#define OUTPUT_PORT PORTB
#define OUTPUT_PIN PORTB4

uint8_t mod = 0;

ISR(PCINT0_vect) {
	//_delay_ms(100);
	if (mod % 2 == 0)
		PORTB ^= (1 << PORTB4);
	mod++;
	//for(volatile int i = 0; i < 25000; i++);
}

void main() {
	// Enable global interrupts.
	sei();
	// Enable pin change interrupts for PCINT3.
	PCMSK |= (1 << PCINT3);
	// Enable pin change interrupts.
	GIMSK |= (1 << PCIE);
	// Set pin 3 as an input pin and pin 4 as an output.
	DDRB  &= ~(1 << DDB3);
	DDRB  |= (1 << DDB4);
	// Set pin 4 high.
	PORTB |= (1 << PORTB4);
	// Pull up pin 3.
	PORTB |= (1 << PORTB3);

	// Infinite while loop so execution doesn't end and 
	// interrupts can continue to be caught.
	while(1);
}

