#ifndef Led_h

#define Led_h
#include <Arduino.h>

class Led{
  private:
    byte _pin_led;
  public:
    Led(byte _pin_led);
    void blink_led(int time);
    void turn_on_led();
    void turn_off_led();
};

#endif



