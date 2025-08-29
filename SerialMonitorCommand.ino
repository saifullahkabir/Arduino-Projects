int ledPin = 2;
String message = "";
boolean playLED = false;
void setup() {
  // put your setup code here, to run once:

  // Baud Rate
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available()) {
    message = Serial.readStringUntil("\n");
    message.trim();

    if (message.equalsIgnoreCase("on")) {
      playLED = true;
    }

    if (message.equalsIgnoreCase("off")) {
      playLED = false;
    }

    Serial.print("Arduino Response:");
    Serial.println(message);
  }

  // Serial.println(ledPin);

  if (playLED) {
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);

    ledPin++;

    if (ledPin > 9) {
      ledPin = 2;
    }
  }
}
