const int ldrPin = 21;
const int buzzerPin = 25;

int switchState = 0;

void setup() {
  Serial.begin(115200);
  pinMode(ldrPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  switchState = digitalRead(ldrPin);

  if (switchState == LOW) {
    digitalWrite(buzzerPin, LOW);
    Serial.println("Output : Bright");
  } else {
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Output : Dark");
  }
}