#include <Wire.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void display_message (char *message)
{
  Wire.begin();
  Wire.beginTransmission(0x27);
  Wire.write(message);
  int error = Wire.endTransmission();
  Wire.end();
}

void loop() {
  // put your main code here, to run repeatedly:
  int analog_ph_value = analogRead(A0);
  double ph_value = log10(analog_ph_value);
  char message[] = {'p','H',ph_value};
  display_message(message);
  Serial.println(ph_value);  
}
