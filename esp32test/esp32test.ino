#define LED_PIN 2 // GPIO pin connected to the LED

void setup() {
  Serial.begin(115200); // Initialize serial communication
  pinMode(LED_PIN, OUTPUT); // Set the LED pin as an output
}

void loop() {
  Serial.println("Turning LED on");
  digitalWrite(LED_PIN, HIGH); // Turn on the LED
  delay(1000); // Wait for 1 second

  Serial.println("Turning LED off");
  digitalWrite(LED_PIN, LOW); // Turn off the LED
  delay(1000); // Wait for 1 second
}
