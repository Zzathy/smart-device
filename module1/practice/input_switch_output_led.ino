const int switchPin = 19;
const int ledPin = 27;

int switchState = 0;

void setup() {
  Serial.begin(115200);
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  switchState = digitalRead(switchPin);
  
  if (switchState == LOW) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  } else {
    digitalWrite(ledPin, LOW);
  }
}