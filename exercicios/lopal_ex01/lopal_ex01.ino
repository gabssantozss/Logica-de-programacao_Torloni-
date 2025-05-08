//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.


//variaveis 
int idade = 0;//inicia a idade
int idadeMeses = 0; 
void setup()
{
 Serial.begin(9600);
}

void loop()
{
Serial.println("|------------------------------|");//primeira linha
Serial.println("|                              |");//segunda linha
Serial.println("|       LOPAL - EX01           |");//terceira linha
Serial.println("|                              |");//quarta linha
Serial.println("|------------------------------|");//ultima linha 

  
Serial.println();//pula uma linha
Serial.println();//pula uma linha
  
  //Entrada  
Serial.println("DIgite sua idade");//Pergunta a idade do usuario 
while(! Serial.available()){}//Aguarda o usario digitar (para o loop)
  idade = Serial.parseInt();
//Processo
idadeMeses = idade * 12;  
  
//Saida
Serial.println("Sua idade em meses:" + String(idadeMeses)); 
}