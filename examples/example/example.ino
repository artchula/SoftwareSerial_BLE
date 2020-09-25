#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); //RX,TX

#include <ArduinoJson.h>
String inString = "";
const int led = 13;


void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  Serial.println("Hi-mySerial");
  pinMode(13, OUTPUT);
}

void loop() {

  while (mySerial.available() > 0) {
    char inChar = mySerial.read();

    Serial.print("inChar : "); Serial.println(inChar);

    if (inChar == '1') {
      Serial.println("H");
      digitalWrite(13, HIGH);
    }
    else if (inChar == '0') {
      Serial.println("L");
      digitalWrite(13, LOW);
    }

  }
}