#ifndef USSensor_h

#include <Arduino.h>
#define USSensor_h

class USSensor{
  private:
    byte _trig_pin;
    byte _echo_pin;
    long _duration, _distance;
  public:
    USSensor(byte _trig_pin, byte _echo_pin);
    long calculate_distance();
};

#endif
