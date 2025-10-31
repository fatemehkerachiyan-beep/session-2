const int ledPin=13;
void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.avavilable()>0){
    char incomingByte==Serial.read();
    if (incomingByte=='H'){
      digitalWrite(ledPin,HIGH);
    }
    else if(incomingByte=='L'){
      digitalWrite(ledPin,LOW);
    }
  }
}
