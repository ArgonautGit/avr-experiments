//#include <avr/io.h>
//#include <util/delay.h>
#include <stdint.h>

#define PORTA (*(volatile uint8_t *)(0x3B))
#define DDRA  (*(volatile uint8_t *)(0x3A))

void main() {
	DDRA = (1 << 0);
	
	while (1) {
		PORTA ^= (1 << 0);

		for (volatile int i = 0; i < 10000; i++);
		
		//_delay_ms(500);
		
	}
}

