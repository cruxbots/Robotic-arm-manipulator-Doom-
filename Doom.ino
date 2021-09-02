#include <Servo.h>

Servo myservo;  // create servo object to control a servo
Servo myservo1;
Servo myservo2;
Servo myservo3;

int potpin = 0;  // analog pin used to connect the potentiometer
int potpin1 = 1;
int potpin2= 2;
int potpin3= 3;
int val,val1,val2,val3;    // variable to read the value from the analog pin
void setup() {
 myservo.attach(10);  // attaches the servo on pin 9 to the servo object
 myservo1.attach(9);
 myservo2.attach(11);
 myservo3.attach(6);
}

void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
 //delay(15);  
 
  val1 = analogRead(potpin1);
  val1 = map(val1, 0, 1023, 0, 180);
  myservo1.write(val1); 
 //delay(15);
  
  val2 = analogRead(potpin2);
  val2 = map(val2, 0, 1023, 0, 180);
  myservo2.write(val2); 

  val3 = analogRead(potpin3);
  val3 = map(val3, 0, 1023, 0, 180);
  myservo3.write(val3);           
  delay(10);                           // waits for the servo to get there
}
