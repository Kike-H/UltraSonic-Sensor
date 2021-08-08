#include <Arduino.h>
#include <Led.h>

Led::Led(byte pin){
  this -> _pin_led = pin;
  pinMode(_pin_led, OUTPUT);
}

void Led::blink_led(int time){
  digitalWrite(_pin_led, HIGH);
  delay(time);
  digitalWrite(_pin_led, LOW);
  delay(time);
}

void Led::turn_on_led(){
  digitalWrite(_pin_led, HIGH);
}

void Led::turn_off_led(){
  digitalWrite(_pin_led, LOW);
}


