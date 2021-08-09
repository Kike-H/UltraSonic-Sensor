#include <Arduino.h>
#include <USSensor.h>

USSensor::USSensor(byte trig_pin, byte echo_pin){
  this -> _trig_pin = trig_pin;
  this -> _echo_pin = echo_pin;
  pinMode(_trig_pin, OUTPUT);
  pinMode(_echo_pin, INPUT);
}

long USSensor::calculate_distance(){
  digitalWrite(_trig_pin, HIGH);
  delay(1);
  digitalWrite(_trig_pin, LOW);
  _duration = pulseIn(_echo_pin, HIGH);
  _distance = _duration/58.2;
  delay(400);
  return _distance;
}

