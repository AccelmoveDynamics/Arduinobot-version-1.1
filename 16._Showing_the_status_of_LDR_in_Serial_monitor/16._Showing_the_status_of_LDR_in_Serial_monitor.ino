const int ledPin = 13;
const int ldrPin = A0;
int ldrStatus;
void setup ()
{
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(ldrPin, INPUT);
}
void loop()
{
// read the ldrPin value and store it in ldrStatus
ldrStatus = analogRead(ldrPin);
if (ldrStatus <= 200)
{
// if ldrStatus is less than or equal to 200
digitalWrite(ledPin, LOW); // led ff
Serial.print("Its DARK, Turn on the LED : ");
Serial.println(ldrStatus);
}
else
{
digitalWrite(ledPin, HIGH); // led on
Serial.print("Its BRIGHT, Turn off the LED : ");
Serial.println(ldrStatus);
}
}
