int pinState;
int count = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12, INPUT_PULLUP);
  
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  pinState = digitalRead(12);

  if (pinState == LOW) {
    count++;
    delay(300);
    Serial.println(count);

    if (count == 1) {
      analogWrite(3, 30);
      analogWrite(5, 30);
      analogWrite(6, 30);
      analogWrite(9, 30);
      analogWrite(10, 30);

    } else if (count == 2) {
      analogWrite(3, 50);
      analogWrite(5, 50);
      analogWrite(6, 50);
      analogWrite(9, 50);
      analogWrite(10, 50);

    } else if (count == 3) {
      analogWrite(3, 100);
      analogWrite(5, 100);
      analogWrite(6, 100);
      analogWrite(9, 100);
      analogWrite(10, 100);

    } else if (count == 4) {
      analogWrite(3, 150);
      analogWrite(5, 150);
      analogWrite(6, 150);
      analogWrite(9, 150);
      analogWrite(10, 150);

    } else if (count == 5) {
      analogWrite(3, 255);
      analogWrite(5, 255);
      analogWrite(6, 255);
      analogWrite(9, 255);
      analogWrite(10, 255);
    }
    else{
      analogWrite(3, 0);
      analogWrite(5, 0);
      analogWrite(6, 0);
      analogWrite(9, 0);
      analogWrite(10, 0);
      count = 0;
    }
  }

  // if(pinState == LOW){
  //   digitalWrite(2, HIGH);
  //   digitalWrite(3, HIGH);
  //   digitalWrite(4, HIGH);
  //   digitalWrite(5, HIGH);
  //   digitalWrite(6, HIGH);
  // }
  // else if ( pinState == HIGH){
  //   digitalWrite(2, LOW);
  //   digitalWrite(3, LOW);
  //   digitalWrite(4, LOW);
  //   digitalWrite(5, LOW);
  //   digitalWrite(6, LOW);
  // }

  // Serial.println(pinState);
  // delay(200);
}
