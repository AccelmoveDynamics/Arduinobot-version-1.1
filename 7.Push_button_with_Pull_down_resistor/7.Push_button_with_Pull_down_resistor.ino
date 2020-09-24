int button = 3;
int led = 12;
int buttonState = 0;
void setup()
{
 pinMode(led,OUTPUT);
 pinMode(button,INPUT);
 Serial.begin(9600); // to begin the monitor
}
void loop()
 {
 //read the state of digital pin 3 and save it to the variable buttonState
 buttonState = digitalRead(button);
 if (buttonState == HIGH) // check whether buttonState is high
 {
 digitalWrite(led, HIGH); // LED on
 Serial.println(buttonState); // print the buttonstate value in serial monitor
 }
 else
 {
 digitalWrite(led, LOW); // LED OFF
 Serial.println(buttonState); // print the value in monitor
 }
}
