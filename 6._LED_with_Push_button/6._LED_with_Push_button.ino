int buttonState;
void setup()
{
 pinMode(13, OUTPUT); // set pin 13 as an output pin
 pinMode(3, INPUT); // set pin 3 as an input pin
}
void loop()
{
 //read the state of digital pin 3 and save it to the variable buttonState
 buttonState=digitalRead(3);
 if (buttonState == HIGH) // check whether buttonState is high
 {
 digitalWrite(13, HIGH); // if state is high make the LED glow
 }
 else
 {
 digitalWrite(13, LOW); // if state is low make the LED off
 }
 }
