//VARIAVEIS
  int relayPIN = 8;
  int ldrPIN = 1;
  int ldrValue = 0;
  int Treshold = 500;
  
void setup() {
  pinMode(ldrPIN, OUTPUT); // LDR PIN
  pinMode(relayPIN, OUTPUT); // RELAY PIN
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPIN); //(0-1023)

  if (ldrValue >= Treshold){
    digitalWrite(relayPIN, HIGH);
  } else {
    digitalWrite(relayPIN, LOW);
  }

  Serial.println(ldrValue);
  delay(100);
}
