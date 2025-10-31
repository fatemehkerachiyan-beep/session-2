String inputString = "";
const int ledPin = 13;
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) {
    inputString = Serial.readString();
    inputString.trim();
    if (inputString == "SABZ") {
      digitalWrite(ledPin, HIGH);
      Serial.println("LED ON");
    } else if (inputString == "50") {
      digitalWrite(ledPin, LOW);
      Serial.println("LED OFF");
    }
  }
}
