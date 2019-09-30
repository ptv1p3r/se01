void setup() {
  // put your setup code here, to run once:
  // O Relay e para ser ligado no "NO" para que se ele nao tiver energia ou sinal se mantenha desligado

  //CONTROLO DE PINOS
  pinMode(7, OUTPUT); //Conectar o fio "S" do relay na porta 7

  //VARIAVEIS
  int relayControl = 0; //Variavel para o controlo do relay
  
}

void loop() {
  // put your main code here, to run repeatedly:

  //Se a variavel conter o valor 0 o relay abre o circuito
  if (relayControl == 0) {
    digitalWrite(7, LOW); //Desliga o relay
  }

  //Se a variavel conter o valor 1 o relay fecha o circuito
  if (relayControl == 1) {
    digitalWrite(7, HIGH); //Liga o relay
  }

}


//NOTAS
//30-09-2019 Fiz o condigo que pediste mas ainda nao testei, vou testar amanha quando sair do trabalho
