const int ledPin = 13;
const int ldrPin = A0;
int ldrStatus;
void setup ()
{
 pinMode(ledPin, OUTPUT);
 pinMode(ldrPin, INPUT);
}
void loop()
{
 ldrStatus = analogRead(ldrPin); // read the ldrPin value and store it in ldrStatus
 if (ldrStatus <= 200) // if ldrStatus is less than or equal to 200
 {
 digitalWrite(ledPin, LOW); // led oFF
 }
else
 {
 digitalWrite(ledPin, HIGH); // led ON
 }
}
