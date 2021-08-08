#include <Arduino.h>
#include <Alarm.h>
#include <Led.h>
#include <Buzzer.h>



Alarm::Alarm(byte pin_led_green, byte pin_led_red, byte pin_buzzer){
    this -> led_green = new Led(pin_led_green);
    this -> led_red = new Led(pin_led_red);
    this -> buzzer = new Buzzer(pin_buzzer);
}

void Alarm::detect_object(int distance, int parameter){
  if(distance >= parameter){
    this -> buzzer -> silence();
    this -> led_green -> turn_on_led();
  }
  else{
    this -> led_green -> turn_off_led();
    this -> led_red -> blink_led(200);
    this -> buzzer -> make_sound();
  }
}
