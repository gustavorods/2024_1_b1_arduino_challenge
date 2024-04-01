// Definindo os Led do Grupo A
int a1 = 13;
int a2 = 12;
int a3 = 11;

// Definindo os Led do Grupo B
int b1 = 6;
int b2 = 5;
int b3 = 4;
int b4 = 3;
int b5 = 2;
int b6 = 1;
int b7 = 0;


void setup()
{
  // Grupo A
  pinMode(a1, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(a3, OUTPUT);
  
  // Grupo B
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(b3, OUTPUT);
  pinMode(b4, OUTPUT);
  pinMode(b5, OUTPUT);
  pinMode(b6, OUTPUT);
  pinMode(b7, OUTPUT);
}


void loop()
{
  // Sequência 1
  digitalWrite(a1, HIGH);
  PositivoBsDireitaEsquerda(b1, b2, b3, b4, b5, b6, b7);
  DesligaBs(b1, b2, b3, b4, b5, b6, b7);
  PositivoBsDireitaEsquerda(b1, b2, b3, b4, b5, b6, b7);
  DesligaBs(b1, b2, b3, b4, b5, b6, b7);
  PositivoBsDireitaEsquerda(b1, b2, b3, b4, b5, b6, b7);
  DesligaBs(b1, b2, b3, b4, b5, b6, b7);
  digitalWrite(a1, LOW);
  
  // Sequência 2
  digitalWrite(a2, HIGH);  
  PositivoBsEsquerdaDireita(b1, b2, b3, b4, b5, b6, b7);
  DesligaBs(b1, b2, b3, b4, b5, b6, b7);
  PositivoBsEsquerdaDireita(b1, b2, b3, b4, b5, b6, b7);
  DesligaBs(b1, b2, b3, b4, b5, b6, b7);
  PositivoBsEsquerdaDireita(b1, b2, b3, b4, b5, b6, b7);
  DesligaBs(b1, b2, b3, b4, b5, b6, b7);
  digitalWrite(a2, LOW);
  
  // Sequência 3
  digitalWrite(a3, HIGH);
  for(int i = 0; i < 3; i++) {
  	PositivoBaoMesmoTempo(b1, b2, b3, b4, b5, b6, b7);
  	delay(5000);
  	DesligaBaoMesmoTempo(b1, b2, b3, b4, b5, b6, b7);
  	delay(10000);
  } 
  

}



// Métodos
// Função onde grupo b ativa da direta pra esquerda (<---)
void PositivoBsDireitaEsquerda(int b1, int b2,int b3, int b4, int b5, int b6, int b7) {
  digitalWrite(b7, HIGH);
  delay(1000);
  digitalWrite(b6, HIGH);
  delay(1000);
  digitalWrite(b5, HIGH);
  delay(1000);
  digitalWrite(b4, HIGH);
  delay(1000);
  digitalWrite(b3, HIGH);
  delay(1000);
  digitalWrite(b2, HIGH);
  delay(1000);
  digitalWrite(b1, HIGH);
  delay(1000);
}

// Função onde grupo b ativa da esquerda pra direita (--->)
void PositivoBsEsquerdaDireita(int b1, int b2,int b3, int b4, int b5, int b6, int b7) {
  digitalWrite(b1, HIGH);
  delay(1000);
  digitalWrite(b2, HIGH);
  delay(1000);
  digitalWrite(b3, HIGH);
  delay(1000);
  digitalWrite(b4, HIGH);
  delay(1000);
  digitalWrite(b5, HIGH);
  delay(1000);
  digitalWrite(b6, HIGH);
  delay(1000);
  digitalWrite(b7, HIGH);
  delay(1000);
}

// Função onde grupo b ativa todos ao mesmo tempo (^^^^)
void PositivoBaoMesmoTempo(int b1, int b2,int b3, int b4, int b5, int b6, int b7) {
  digitalWrite(b1, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(b3, HIGH);
  digitalWrite(b4, HIGH);
  digitalWrite(b5, HIGH);
  digitalWrite(b6, HIGH);
  digitalWrite(b7, HIGH);
}

// Função onde desligo todos os Bs AO MESMO TEMPO
void DesligaBaoMesmoTempo(int b1, int b2,int b3, int b4, int b5, int b6, int b7) {
  digitalWrite(b1, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(b3, LOW);
  digitalWrite(b4, LOW);
  digitalWrite(b5, LOW);
  digitalWrite(b6, LOW);
  digitalWrite(b7, LOW);
}


// Função onde desligo todos os Bs 
/* Esse código desliga todos, mas em uma ordem sequencial 
da esquerda pra direita */
void DesligaBs(int b1, int b2,int b3, int b4, int b5, int b6, int b7) {
  digitalWrite(b1, LOW);
  delay(1000);
  digitalWrite(b2, LOW);
  delay(1000);
  digitalWrite(b3, LOW);
  delay(1000);
  digitalWrite(b4, LOW);
  delay(1000);
  digitalWrite(b5, LOW);
  delay(1000);
  digitalWrite(b6, LOW);
  delay(1000);
  digitalWrite(b7, LOW);
  delay(1000);
}

