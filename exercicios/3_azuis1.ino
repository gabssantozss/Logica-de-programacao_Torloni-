// C++ code
//variaaveis

int primeroledAzul = 1;
int segundoledAzul = 3;
int terceiroledAzul = 5;
int ledVerde = 8;
int ledVermelho = 11;
int pontosObtidos = 1;
int quantidadeRodadas;

#include <Servo.h>
Servo portaDaFortaleza;

//funções

  
void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode (ledVermelho, OUTPUT);
  pinMode (ledVerde, OUTPUT);
  pinMode (terceiroledAzul, OUTPUT);
  pinMode (segundoledAzul, OUTPUT);
  pinMode (primeroledAzul, OUTPUT);
  portaDaFortaleza.attach(9);
  portaDaFortaleza.write(0);
}

void loop()
{   
  int DadoPalpites [quantidadeRodadas];
  int DadoResultados [quantidadeRodadas];  
  
  
  for(int q = 0; q < quantidadeRodadas; q++)
  {
    Serial.println("-------------------------------------------");
    Serial.println();
    Serial.println("Fortaleza dos Dados - Desafio");
    Serial.println();
    Serial.println("-------------------------------------------"); 
 
    int palpite = 0;
    Serial.println("Digite um numero de 1 a 6:");
    while( ! Serial.available());
    palpite = Serial.parseInt();
    int numeroAleatorio = random(1, 7);
    Serial.println();
  }
}
    
