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

void Led::bright_led(int distance){
  int brightness = map(distance, 0, 358, 255,0);
  analogWrite(_pin_led,brightness);
}
