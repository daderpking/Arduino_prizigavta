int motor = 8;
int start =9;
int check = 0;
int kill =10;
void setup() {
  Serial.begin(9600);
  pinMode(motor,OUTPUT);
  pinMode(start,INPUT);
  pinMode(kill,INPUT);
  

}

void loop() {
  if(digitalRead(start) == HIGH && digitalRead(kill) == LOW && check == 0){
    digitalWrite(motor,HIGH);
    delay(200);
    digitalWrite(motor,LOW);
    delay(200);
    digitalWrite(motor,HIGH);
    delay(250);
    digitalWrite(motor,LOW);
    delay(250);
    digitalWrite(motor,HIGH);
    delay(200);
    digitalWrite(motor,LOW);
    delay(200);
    if(digitalRead(start) == LOW){
      check=1;
    }
  }
  if(check == 1){
    digitalWrite(motor,HIGH);
  }
  if(digitalRead(kill) == HIGH){
    digitalWrite(motor,LOW);
    check=0;
   }

}
