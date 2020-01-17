#define inpin A0
#define led 9 //PWM pin

void setup() {
  Serial.begin(9600);
  pinMode(inpin,INPUT);
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  
  //get the analog read
  int  val = analogRead(inpin);

  //map the range   analog read range=0-1024  pwm range = 0-255
  int val2 = map(val,0,1024,0,255);

  //
  analogWrite(led,val2);
  Serial.println(val);

}
