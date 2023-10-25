#define LIGHT_SENSOR_PIN 34

void setup() {
  Serial.begin(115200);
}

void loop() {
  int analogValue = analogRead(LIGHT_SENSOR_PIN);
  Serial.print("Analog Value = ");
  Serial.println(analogValue);
  delay(100);
}