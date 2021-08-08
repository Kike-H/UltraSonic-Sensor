#ifndef Alarm_h

#include <Arduino.h>
#include <Led.h>
#include <Buzzer.h>

#define Alarm_h

class Alarm{
  private:
    Led* led_red;
    Led* led_green;
    Buzzer* buzzer;
  public:
    Alarm(byte pin_led_green, byte pin_led_red, byte pin_buzz);
    void detect_object(int distance, int parameter);
};

#endif
