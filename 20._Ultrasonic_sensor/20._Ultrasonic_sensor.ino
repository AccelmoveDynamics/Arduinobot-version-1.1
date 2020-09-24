int trigPin = 8; // define the trig pin
int echoPin = 7; // define the echo pin
float duration, distance;
void setup()
{
Serial.begin (9600);
pinMode(trigPin, OUTPUT); // set the input and output pins
pinMode(echoPin, INPUT);
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(5);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration = pulseIn(echoPin, HIGH); // pulseIn function will start the timer ,when the trig signal produces the signal and store the value in duration
distance = (duration*0.034)/2; //the speed of the sound is0.034 microseconds.Dividing by 2 means the Sound will travels the object and come back
Serial.print(distance); // print the distance
Serial.print("cm");
Serial.println();
delay(400);
} 
