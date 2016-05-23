#include "Arduino.h"
#include "TempSensor.cpp"

TempSensor ts = TempSensor(24, A0);
void setup()
{
  ts.tempSensorSetup();
}

void loop()
{
  ts.tempSensorLoop();
}
