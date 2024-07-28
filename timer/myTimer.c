#include "myTimer.h"


void main() {
	// GPIO initilization.
	DDRA |=  (1 << PA0);
	DDRA &= ~(1 << PA1);

	//initTimer0Overflow();
	initTimer0CompareMatch(255);

	while (1) {
		if ( !(PINA & (1 << PA1)) ) // If PA1 is low.
			changeTimer0CompareMatch(255);
		else 
			changeTimer0CompareMatch(25);
	}
}

