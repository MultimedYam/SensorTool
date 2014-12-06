SensorTool
==========

Arduino sensor library.

This is a small tool I wrote to simplify the need of having to initialize each individual sensor. This library helps simplify using analog and digital sensors in combination. For best usage: Use library in an array. A sample arduino sketch is included in this repository.

#####Usage
The library makes use of a sensor type Enumeration to distinguish between Analog and Digital sensors.

#####To initialize a sensor:

`Sensor sensor = Sensor( SensorPin, SensorType );`

The 'SensorPin' is the int value of the pin the sensor is connected to. This can either be Digital Pin values or Analog Pin (A0-An) values.

Since the library comes with predefined SensorType enumerator, you may either use `Analog` or `Digital` in the 'SensorType' parameter.

#####To read a value out of a sensor use:

`int Value = sensor.Read();`
