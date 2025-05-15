//variaveis
int primeiroNumero = 99;
int contador;


void setup()
{
 Serial.begin(9600);
}

void loop()
{
  for (int contador = 1; contador <= 99; contador+=2){
 //exiba dos numeros impares
  Serial.println(contador);
  }
  
  delay(2000);
}