
#include <ESP8266WiFi.h>

char auth[] = "bXQwoUUwmqoSKXbKARNAvqRGyyluc8kc";  // Replace with your Blynk authentication token
char ssid[] = "sam";   // Replace with your WiFi credentials
char pass[] = "'12345678";

int pirPin = D2;  // PIR sensor connected to digital pin D2

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(pirPin, INPUT);
}

void loop() {#define BLYNK_PRINT Serial
#include <BlynkSimpleEsp8266.h>  // Include the appropriate Blynk library for your hardware
#include <ESP8266WiFi.h>

char auth[] = "bXQwoUUwmqoSKXbKARNAvqRGyyluc8kc";  // Replace with your Blynk authentication token
char ssid[] = "sam";   // Replace with your WiFi credentials
char pass[] = "'12345678";

int pirPin = D2;  // PIR sensor connected to digital pin D2

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(pirPin, INPUT);
}

void loop() {
  Blynk.run();
  
  int pirState = digitalRead(pirPin);

  if (pirState == HIGH) {
    Blynk.notify("Intruder detected!");
  }

  delay(1000);  // Adjust delay as needed
}
  Blynk.run();
  
  int pirState = digitalRead(pirPin);

  if (pirState == HIGH) {
    Blynk.notify("Intruder detected!");
  }

  delay(1000);  // Adjust delay as needed
}
