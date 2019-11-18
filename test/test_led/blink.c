
    #include "mbed.h"

    BusOut leds(LED1, LED2, LED3, LED4);

    int main() {
        uint8_t count = 0;
        while(1) {
            leds = count++;
            wait(1);
        }
    }