#include <WiFi.h>

const char* ssid = "KEPO YA";
const char* password = "87654321";

void setup() {
  Serial.begin(115200);
  connectToWiFi();
}

void loop() {
  
}

void connectToWiFi() {
  Serial.println("Mencoba terhubung ke jaringan WiFi...");

  WiFi.begin(ssid, password);

  int attempt = 0;
  while (WiFi.status() != WL_CONNECTED) {
    delay(2000);
    Serial.println("Gagal terhubung ke jaringan WiFi. Mencoba jaringan WiFi terbuka...");
    
    WiFi.begin("Zzathy");
    attempt++;
    
    if (attempt > 5) {
      Serial.println("Gagal terhubung ke jaringan WiFi. Tidak ada jaringan WiFi yang tersedia.");
      break;
    }
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("Terhubung ke jaringan WiFi!");
    Serial.print("Nama SSID: ");
    Serial.println(ssid);
  }
}
