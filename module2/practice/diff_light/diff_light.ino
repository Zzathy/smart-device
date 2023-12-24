const int ldrPin = 32;
const int ledPin = 21;

int analogValue = 0;

void setup() {
  Serial.begin(115200);
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogValue = analogRead(ldrPin);
  int brightness = 0;

  int invertedValue = 4095 - analogValue;

  Serial.print("Analog Value = ");
  Serial.println(invertedValue);

  if (invertedValue < 500) {
    brightness = 43;
    analogWrite(ledPin, brightness);
  } else if (invertedValue > 500 && invertedValue < 1000) {
    brightness = 120;
    analogWrite(ledPin, brightness);
  } else {
    brightness = 255;
    analogWrite(ledPin, brightness);
  }
  delay(1000);
}