#include <avr/io.h>

typedef uint8_t bool;

void setInputGPIO(uint8_t *port, uint8_t pin, bool isInput) {
	if (isInput)
		*port |= (1 << pin);
	else
		*port &= ~(1 << pin);				
}

void setGPIO(uint8_t *port, uint8_t pin) {
    *port |= (1 << pin);
}

void clearGPIO(uint8_t *port, uint8_t pin) {
    *port &= ~(1 << pin);
}

void toggleGPIO(uint8_t *port, uint8_t pin) {
    *port ^= (1 << pin);
}
