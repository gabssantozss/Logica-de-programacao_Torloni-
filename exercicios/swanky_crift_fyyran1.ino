//variaveis 
int primeiroNumero = 80;
int segundoNumero = 101; 
int contador;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  for (int contador = 60; contador <= 80; contador+=2){
  //exiba numeros pares
  Serial.println(contador);
  }
  for (int contador = 81; contador <= 101; contador+=2){
  //exiba numeros impares
  Serial.println(contador);
  }

  
  delay(2000);
}