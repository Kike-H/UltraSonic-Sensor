#include <Led.h>
#include <USSensor.h>
#include <Buzzer.h>
#include <Alarm.h>

const USSensor uss(8,9);
Alarm alarm(6,7,13);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop(){
  // put your main code here, to run repeatedly:
  long distance = uss.calculate_distance();
  Serial.println(distance);
  alarm.detect_object(distance,60);
}
