long previousTime = 0;
long currentTime = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int gasLevel = analogRead(A0);
  Serial.println(gasLevel);

  if (gasLevel >= 550) {

    currentTime = millis();
    if (currentTime - previousTime >= 50) {
      previousTime = currentTime;
      int pinState = digitalRead(4);

      digitalWrite(4, !pinState);
      digitalWrite(5, !pinState);
      digitalWrite(6, !pinState);
    }
  } else if (gasLevel >= 150) {

    currentTime = millis();
    if (currentTime - previousTime >= 500) {
      previousTime = currentTime;
      int pinState = digitalRead(4);

      digitalWrite(4, !pinState);
      digitalWrite(5, !pinState);
      digitalWrite(6, !pinState);
    }
  } else {
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
  }
}
      