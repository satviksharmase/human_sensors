void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
  pinMode(4, INPUT);

  
  
}

void loop() {
  
  if (digitalRead(5) == HIGH) {
    Serial.println("Active");
  }
  else {
    Serial.println("Inactive");
  }

  if (digitalRead(5) == HIGH) {
    Serial.println("Active");
  }
  else {
    Serial.println("Inactive");
  }
  if (digitalRead(6) == HIGH) {
    Serial.println("Active");
  }
  else {
    Serial.println("Inactive");
  }
  delay(1000);
}
