#include "gpio.h"

#include <avr/delay.h>

int main() {
	setInputGPIO(&DDRA, PA0, 1);

	while (1) {
    	toggleGPIO(&PORTA, PA0);
		_delay_ms(500);
		//for (volatile int i = 0; i < 10000; i++);
	}
}
