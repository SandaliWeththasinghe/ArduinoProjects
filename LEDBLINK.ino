#define ledpin 7
#define delaytime 1000
void setup() {
  // put your setup code here, to run once:
 pinMode(ledpin,OUTPUT);
}

void loop() {
  digitalWrite(ledpin,HIGH);
  delay(delaytime);
  digitalWrite(ledpin,LOW);
  delay(delaytime);
  // put your main code here, to run repeatedly:

}
