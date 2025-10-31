int led1=12;
int led2=13;
int i;
void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {
  for(i=0;i<5;i++){
    digitalWrite (led1,HIGH);
    digitalwrite(led2,HIGH);
    delay(1000);
    digitalWrite (led1,LOW);
    digitalwrite(led2,LOW);
    delay(1000);
  }
  for(i=0;i<5;i++){
    digitalWrite (led1,HIGH);
    digitalwrite(led2,HIGH);
    delay(2000);
    digitalWrite (led1,LOW);
    digitalwrite(led2,LOW);
    delay(2000);
}
for(i=0;i<5;i++){
    digitalWrite (led1,HIGH);
    digitalwrite(led2,HIGH);
    delay(3000);
    digitalWrite (led1,LOW);
    digitalwrite(led2,LOW);
    delay(3000);
}
}