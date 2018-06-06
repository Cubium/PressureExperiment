#include <Wire.h>
#include <MS5xxx.h>

MS5xxx sensor(&Wire);

void setup() {
  Serial1.begin(9600);
  delay(1000);
}

void loop() {
  sensor.ReadProm();
  sensor.Readout();
  Serial1.println(sensor.GetPres());
  delay(500);
}
