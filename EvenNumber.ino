String message = "";

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
    message = Serial.readString();
    message.trim();

    int number = message.toInt();

    if (number % 2 == 0) {
      if (number == 2) {
        digitalWrite(2, HIGH);
      } else if (number == 4) {
        digitalWrite(4, HIGH);
      } else if (number == 6) {
        digitalWrite(6, HIGH);
      }
    } else {
      if (number == 3) {
        digitalWrite(3, HIGH);
      } else if (number == 5) {
        digitalWrite(5, HIGH);
      }
    }


    Serial.print("Arduino Response:");
    Serial.println(message);
  }

  
}
