#include <Arduino.h>
#include <Alarm.h>
#include <Led.h>
#include <Buzzer.h>



Alarm::Alarm(byte pin_led, byte pin_buzzer){
    this -> led = new Led(pin_led);
    this -> buzzer = new Buzzer(pin_buzzer);
}

void Alarm::detect_object(int distance){
  if(distance >= 90){
    this -> buzzer -> silence();
    this -> led -> bright_led(distance);
  }
  else{
    this -> led -> blink_led(200);
    this -> buzzer -> make_sound();
  }
}
