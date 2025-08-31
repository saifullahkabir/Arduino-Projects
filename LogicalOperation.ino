
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int buttonState1 = digitalRead(12);
  int buttonState2 = digitalRead(13);

  if(buttonState1 == 0 && buttonState2 == 0){
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
  }
  else if (buttonState1 == 0 || buttonState2 == 0){
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
  }
  delay(100);

}
