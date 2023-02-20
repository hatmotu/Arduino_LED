
#include "Led.h"


Led::Led(uint8_t pin) {
 _pin = pin; 
 DDRB = DDRB |=_BV(_pin); 
}

void Led::on() {
  PORTB |= _BV(_pin);
}

void Led::off() {
  PORTB &= ~_BV(_pin);
}
