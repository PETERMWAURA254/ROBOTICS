//// this sample code provided by www.programmingboss.com
//#define RXp2 16
//#define TXp2 17
//void setup() {
//  // put your setup code here, to run once:
//  Serial.begin(115200);
//  Serial2.begin(9600, SERIAL_8N1, RXp2, TXp2);
//}
//void loop() {
//    Serial.println("Message Received: ");
//    Serial.println(Serial2.readString());
//}
#include <SoftwareSerial.h>

#define RXp2 2
#define TXp2 3

SoftwareSerial Serial2(RXp2, TXp2);

void setup() {
  Serial.begin(115200);
  Serial2.begin(9600);
}

void loop() {
  Serial.println("Message Received: ");
  
  // Check if data is available on the software serial port
  if (Serial2.available()) {
    Serial.println(Serial2.readString());
  }
}
