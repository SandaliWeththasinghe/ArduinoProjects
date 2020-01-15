#define inpin A0
#include <Servo.h>

Servo myservo;  

int pos = 0;    

void setup() {
  pinMode(inpin,INPUT);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  int val = analogRead(inpin);
  int val2 = map(val,0,1024,0,180);
  myservo.write(val2);
}
