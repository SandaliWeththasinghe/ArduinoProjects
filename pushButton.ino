#define inputPin 6
#define ledPin 7

int check = 0;
int state = 1;
void setup() {
  pinMode(inputPin,INPUT);
  pinMode(ledPin,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int val = digitalRead(inputPin);
  if((val==1)&&(check==0)){
    if(state==1){
      digitalWrite(ledPin,state);
      state =0;
    }else{
      digitalWrite(ledPin,state);
       state=1;
    }
    delay(500);
    check=1;
  }
  else if((val==0)&&(check==1)){
    check=0;
  }
  
  // put your main code here, to run repeatedly:

}
