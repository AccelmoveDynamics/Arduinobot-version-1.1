int buttonPin = 3; // set the buttonPin as 3
int led = 12; // set the led pin as digital pin 12
int buttonState = 0;
void setup()
{
pinMode(buttonPin,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}
void loop(){
//read the state of digital pin 3 and save it to the variable buttonState
buttonState = digitalRead(buttonPin);
if (buttonState == LOW) // if buttonstate is low
{
digitalWrite(led,HIGH); // LED glows
Serial.println(buttonState); // print the buttonstate value in serial monitor
}
else
{
digitalWrite(led,LOW); // LED off
Serial.println(buttonState); // print the buttonstate value in Serial monitor
}
}
