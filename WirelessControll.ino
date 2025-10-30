String message = "";

void setup() {
  Serial.begin(9600);
  pinMode(1, OUTPUT);  // D1 = TX
  pinMode(8, OUTPUT);
  digitalWrite(1, HIGH);
  digitalWrite(8, HIGH);
}
void loop() {
  if (Serial.available()) {
    message = Serial.readStringUntil("\n");
    message.trim();
    // Serial.println(message);

    if (message.equalsIgnoreCase("light on")) {
      digitalWrite(8, LOW);
      Serial.println("LED Turned On");
    } else if (message.equalsIgnoreCase("light off")) {
      digitalWrite(8, HIGH);
      Serial.println(" LED Turned Off");
    }
    
  }
}
