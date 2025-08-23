int buyPrice, sellPrice, profit, percentage;
// float percentage;


void setup() {
  // put your setup code here, to run once:

  // Baud Rate
  Serial.begin(9600);

  buyPrice = 500;
  sellPrice = 900;
}

void loop() {
  // put your main code here, to run repeatedly:

  sellPrice = sellPrice - 10;
  
  profit = sellPrice - buyPrice;
  percentage = (profit / (float)buyPrice) * 100;
  Serial.print("Profit is:");
  Serial.println(profit);
  Serial.print(percentage);
  Serial.println("%");
  delay(2000);
}
