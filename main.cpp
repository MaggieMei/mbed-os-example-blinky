#include "mbed.h"

DigitalOut led1(PB_13);

// main() runs in its own thread in the OS
int main() {
    while (true) {
        led1 = !led1;
        wait(0.5);
    }
}

