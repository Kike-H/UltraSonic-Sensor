#include <Arduino.h>
#include <Buzzer.h>

Buzzer::Buzzer(byte buzzer_pin){
  this -> _buzzer_pin = buzzer_pin;
  pinMode(_buzzer_pin,OUTPUT);
}

void Buzzer::make_sound(){
  digitalWrite(_buzzer_pin, HIGH);
  delay(10);
  digitalWrite(_buzzer_pin, LOW);
  delay(10);
}

void Buzzer::silence(){
  digitalWrite(_buzzer_pin, LOW);
}


