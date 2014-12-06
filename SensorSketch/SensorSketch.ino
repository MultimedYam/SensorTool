#include <SensorTool.h>

Sensor SensorList[2] =
{
  Sensor(A0, Analog),
  Sensor(7, Digital)
};
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = SensorList[0].Read();
  Serial.println(sensorValue);
  delay(500);
}
