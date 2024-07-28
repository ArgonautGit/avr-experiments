#include "gpio.h"

#define TX_PIN
#define RX_PIN

#define MESSAGE_SIZE

private void send_command(*array_pt, uint8_t size) {
	for (uint8_t i = 0; i < size; i++) {
		
	}
}

void sound_play() {
	const uint8_t PLAY_COMMAND[10] = {0x7E, 0xFF, 0x06, 0x0D, 0x00, 0x00, 0x00, 0xFE, 0xEE, 0xEF};

	
}
