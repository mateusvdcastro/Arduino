#define PORT_NUMBER 2
#define UM_SEGUNDO 1000
#define MEIO_SEGUNDO 500

int ledVermelho = PORT_NUMBER; // var de escopo global

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledVermelho, OUTPUT); // O pinMode recebe dois parâmetros, o primeiro é o número da porta e o segundo é o modus, de entrada ou saída.
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(ledVermelho);
  piscaLed(ledVermelho);
}

void piscaLed(int num_Port){
    digitalWrite(num_Port,HIGH); // Ela recebe como primeiro parâmetro a porta que queremos escrever e como segundo os valores 0 (LOW) ou 1 (HIGH). Zero indica que não estamos emitindo sinal algum, o valor um indica que estamos emitindo um sinal.
    delay(UM_SEGUNDO);
    digitalWrite(num_Port,LOW);
    delay(MEIO_SEGUNDO);    
}
