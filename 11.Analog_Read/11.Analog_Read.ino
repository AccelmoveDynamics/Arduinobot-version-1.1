int sensorPin = A0;
int sensorValue=0;
// put the setup code here: to run once
void setup()
{
Serial.begin(9600); // to begin the serial monitor
}
void loop()
{
sensorValue = analogRead(sensorPin); // Read the input pin
Serial.println(sensorValue); // Print the value of the sensor in serial monitor
delay(50); // wait for 50ms
}
