void setup() {
  pinMode(7, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  
}

void loop() {

  digitalWrite(7, HIGH);
  delay(5000);
  digitalWrite(7, LOW);

  digitalWrite(11, HIGH);
  delay(3000);
  digitalWrite(11, LOW);

  digitalWrite(12, HIGH);
  delay(5000);
  digitalWrite(12, LOW);

}
