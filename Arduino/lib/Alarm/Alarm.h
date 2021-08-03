#ifndef Alarm_h

#include <Arduino.h>
#include <Led.h>
#include <Buzzer.h>

#define Alarm_h

class Alarm{
  private:
    Led* led;
    Buzzer* buzzer;
  public:
    Alarm(byte pin_led, byte pin_buzz);
    void detect_object(int distance);
};

#endif
