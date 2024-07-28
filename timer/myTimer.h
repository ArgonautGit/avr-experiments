#include <avr/io.h>
#include <avr/interrupt.h>

#define uint8_t __UINT8_TYPE__

// Interrupt handler for timer0 overflow.
ISR (TIM0_OVF_vect) {
	// Toglle PA0.
	PORTA ^= (1 << PA0);

	TCNT0 = 0x00;
}

// Initialize timer0 for overflow interrupt.
void initTimer0Overflow(void) {
	// Enable global interrupts.
	sei();

	// Configure prescaler to 1024 divison.
	TCCR0B |= (1 << CS00) | (1 << CS02);
	// Enable timer0 overflow interrupt.
	TIMSK0 |= (1 << TOIE0);

	// Reset timer's counter to 0.
	TCNT0 = 0x00;
}

ISR (TIM0_COMPA_vect) {
	// Toggle PA0.
	PORTA ^= (1 << PA0);

	// Reset counter to 0.
	TCNT0 = 0x00;
}

// Initialize timer0 for compare match interrupt.
void initTimer0CompareMatch(uint8_t compare) {
	// Enable global interrupts.
	sei();

	// Set output compare value A to input number.
	OCR0A = compare;

	// Configure prescaler to 1024 division.
	TCCR0B |= (1 << CS00) | (1 << CS02);
	// Enable output compare A interrupt.
	TIMSK0 |= (1 << OCIE0A);

	// Reset timer's counter to 0.
	TCNT0 = 0x00;
}

// Wrapper function to change compare match register.
void changeTimer0CompareMatch(uint8_t compare) {
	OCR0A = compare;
}


// Entry point.
void main(void);
