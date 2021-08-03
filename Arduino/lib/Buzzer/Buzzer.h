#ifndef Buzzer_h

#include <Arduino.h>
#define Buzzer_h

class Buzzer{
  private:
    byte _buzzer_pin;
    float _sin_value;
    int _tone_value;
  public:
    Buzzer(byte buzzer_pin);
    void make_sound();
    void silence();
};

#endif
