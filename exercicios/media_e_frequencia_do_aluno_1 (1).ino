// C++ code


//variaveis   
int primeiraNota = 7;
int segundaNota = 8;


void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //entrada 
 Serial.println("Digite a primeira nota");//aguarde o usuario digitar
 while (!Serial.available()); //tive que verificar
 primeiraNota = Serial.parseInt(); //tive que verficar 
  
 Serial.println("DIgite a segunda nota");//aguarde o usuario digitar 
 while (!Serial.available()); //tive que verificar
 segundaNota = Serial.parseInt(); //tive que verificar
 
 Serial.println("Digite sua frequencia");//aguarde o usuario digitar 
 while (!Serial.available()); //tive que verificar 
 
//processamento   
(primeiraNota + segundaNota / 2 ) //tive que verificar 
(frequencia >= 75)
   
   
//saida
Serial.println("reprovado por falta");
 if {else
Serial.println("Aprovado");
 if  {else
Serial.println("Reprovado por falta e nota");
  if  {else
Serial.println("Parabens!, nota maxima!");
   else 
  
}