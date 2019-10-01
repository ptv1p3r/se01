//VARIAVEIS
  int relayPIN = 7;
  int ldrPIN = 1;
  int ldrValue = 0;
  int Treshold = 100;
  
void setup() {
  pinMode(ldrPIN, OUTPUT); // LDR PIN
  pinMode(relayPIN, OUTPUT); // RELAY PIN
//  digitalWrite(relayPIN, HIGH);
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPIN); //(10-617)

  if (ldrValue >= Treshold){
    digitalWrite(relayPIN, LOW);
  } else {
    digitalWrite(relayPIN, HIGH);
  }

//  Serial.println(ldrValue);
  delay(100);
}
