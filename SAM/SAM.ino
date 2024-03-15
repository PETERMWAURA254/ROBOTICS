const int AirValue = 543;         // Analog Value when Sensor is exposed to dry air
const int WaterValue = 301;       // Analog Value when Sensor is kept in water
const int SensorPin = A0;         // Analog pin where the sensor is connected

// Variables to hold sensor values
int soilMoistureValue = 0;
int soilmoisturepercent = 0;
int relaypin = 2;                 // Pin where the relay is connected

void setup() {
  Serial.begin(9600);              // Begin serial communication at 9600 bps
  pinMode(relaypin, OUTPUT);      // Set the relay pin as an output
  digitalWrite(relaypin, LOW);    // Start with the relay off
  delay(1000);
}

// Function to control the relay based on soil moisture
void controlRelay() {
  if (soilmoisturepercent <= 40) {
    digitalWrite(relaypin, HIGH);
    Serial.println("Motor: ON");
  } else {
    digitalWrite(relaypin, LOW);
    Serial.println("Motor: OFF");
  }
}

void loop() {
  soilMoistureValue = analogRead(SensorPin);      // Read the value from the soil moisture sensor
  Serial.print("Soil moisture: ");
  Serial.print(soilmoisturepercent);
  Serial.println("%");

  soilmoisturepercent = map(soilMoistureValue, AirValue, WaterValue, 0, 100);     // Map the sensor value to a soil moisture percentage
  soilmoisturepercent = constrain(soilmoisturepercent, 0, 100);       // Ensure soilmoisturepercent is between 0 and 100

  controlRelay();                       // Control the relay based on the soil moisture
  delay(100);
}
