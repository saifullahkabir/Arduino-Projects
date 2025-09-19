long previousTime = 0;
long currentTime = 0;
int blinkTime = 200;

void setup() {

  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int waterLevel = analogRead(A0);
  Serial.println(waterLevel);

  if (waterLevel >= 300) {

    digitalWrite(10, 0);
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    previousTime = millis();
  } else {
    currentTime = millis();

    if (currentTime - previousTime >= 30000) {
      digitalWrite(10, 1);
      digitalWrite(13, LOW);

      if ((currentTime / blinkTime) % 2 == 0) {
        digitalWrite(12, HIGH);
      } else {
        digitalWrite(12, LOW);
      }
    }
  }
  
}
