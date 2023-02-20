#include <Led.h>
#include <avr/io.h>
#include <util/delay.h>

Led statusLed(5);

int main() {

  while(true) {
    statusLed.on();
    _delay_ms(1000);
    statusLed.off();
    _delay_ms(1000);
  }
}