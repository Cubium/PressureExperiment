#include <SoftwareSerial.h>
#include <Wire.h>
#include <MS5xxx.h>

MS5xxx sensor(&Wire);
SoftwareSerial bluetooth(8, 7);

void setup() {
  Serial.begin(9600);
  bluetooth.begin(9600);
  delay(1000);
}

void loop() {
  sensor.ReadProm();
  sensor.Readout();
  bluetooth.println(sensor.GetPres());
  delay(500);
}
