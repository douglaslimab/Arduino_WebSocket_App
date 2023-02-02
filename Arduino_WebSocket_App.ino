#include <WiFi.h>

const char* ssid = "VM47E4856";         //"Douglas";
const char* password = "7z4ycmhbRaMh";  //"hzzs03322";

#define LED 13

void setup(){
  Serial.begin(115200);

  pinMode(LED, OUTPUT);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    Serial.println("Connecting to WiFi..");
    delay(1000);
  }

  Serial.println("Connected to WiFi");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop(){
  digitalWrite(LED, WiFi.status());
}