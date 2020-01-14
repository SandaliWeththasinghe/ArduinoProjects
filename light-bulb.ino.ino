#define led 13 // the pin the LED is connected to

void setup() {
  pinMode(led, OUTPUT); // Declare the LED as an output
}

void loop() {
  digitalWrite(led,HIGH); // Turn the LED on
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
}
