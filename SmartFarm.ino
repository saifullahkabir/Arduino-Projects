#include "DHT.h"

DHT myDht(13, DHT11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myDht.begin();
  delay(2000);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  float temp = myDht.readTemperature();
  float humidity = myDht.readHumidity();
  if (temp < 32) {
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(6, 1);

  } else {
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
  }
  Serial.print("Temperature:");
  Serial.println(temp);
  Serial.println(humidity);
  delay(1000);
}
