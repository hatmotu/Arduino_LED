#include <Arduino.h>
#include <Led.h>


Led statusLed(LED_BUILTIN);

void setup() {  
}

void loop() {
  statusLed.on();
  delay(1000);
  statusLed.off();
  delay(1000);
}