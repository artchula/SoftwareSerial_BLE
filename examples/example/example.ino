#include <SoftwareSerial.h>
SoftwareSerial mySerial(11, 12); //RX,TX

String inString = "";
const int led = 13;


void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  Serial.println("Hi-mySerial");
  Serial.println("Micro Project Thailand ~^.^~ ");
  pinMode(led, OUTPUT);
}

void loop() {

  while (mySerial.available() > 0) {
    char inChar = mySerial.read();

    Serial.print("inChar : "); Serial.println(inChar);

    if (inChar == '1') {
      Serial.println("H");
      digitalWrite(led, HIGH);
    }
    else if (inChar == '0') {
      Serial.println("L");
      digitalWrite(led, LOW);
    }

  }
}
