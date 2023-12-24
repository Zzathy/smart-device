#include <WiFi.h>

const char* ssid = "Zzathy";

void setup() {
  Serial.begin(115200);9
  WiFi.begin(ssid);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("Connected to WiFi");
}

void loop() {
  
}