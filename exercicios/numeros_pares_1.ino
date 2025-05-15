//variavel
int primeiroNumero = 100;
int contador;
//
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  for (int contador = 0; contador <= 100; contador+=2){
  //exiba os numeros de 2 em 2 
  Serial.println(contador);
  }
  
  
 delay (2000);
}