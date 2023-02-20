#ifndef OO_LED
#define OO_LED

#include <arduino.h>

class Led {
  private: 
  uint8_t _pin;

  public: 
  Led(const uint8_t pin);
  void on();
  void off();
};
#endif