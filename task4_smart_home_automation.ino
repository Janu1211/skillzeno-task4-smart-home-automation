#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "Smart Home"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// Wi-Fi credentials
char ssid[] = "YOUR_WIFI_SSID";
char pass[] = "YOUR_WIFI_PASSWORD";

// ESP32 relay pins
#define RELAY1_PIN 25
#define RELAY2_PIN 26

// Blynk virtual pins
#define VPIN_LED  V0
#define VPIN_FAN  V1

// Most relay modules are active LOW
#define RELAY_ON  LOW
#define RELAY_OFF HIGH

BLYNK_WRITE(VPIN_LED)
{
  int state = param.asInt();

  digitalWrite(RELAY1_PIN, state ? RELAY_ON : RELAY_OFF);

  Serial.println(state ? "LED ON" : "LED OFF");
}

BLYNK_WRITE(VPIN_FAN)
{
  int state = param.asInt();

  digitalWrite(RELAY2_PIN, state ? RELAY_ON : RELAY_OFF);

  Serial.println(state ? "FAN ON" : "FAN OFF");
}

void setup()
{
  Serial.begin(115200);

  pinMode(RELAY1_PIN, OUTPUT);
  pinMode(RELAY2_PIN, OUTPUT);

  // Keep appliances OFF initially
  digitalWrite(RELAY1_PIN, RELAY_OFF);
  digitalWrite(RELAY2_PIN, RELAY_OFF);

  // Connect ESP32 to Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  Serial.println("Smart Home Automation Started!");
}

void loop()
{
  Blynk.run();
}