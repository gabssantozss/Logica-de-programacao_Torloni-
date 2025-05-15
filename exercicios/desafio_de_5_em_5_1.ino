//variaveis
int primeiroNumero = 100;
int contador; 
void setup()
{
  Serial.begin(9600);   
}

void loop()
{

  for (int contador  = 0; contador <= 100; contador+=5) {
    //exiba os numeros de 5 em 5
    Serial.println(contador);
  }
  
  
  delay (12000);
}