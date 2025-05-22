
//Faça um programa que contenha um array tamanho 10. Solicite ao usuário que
//digite números pares, inteiros, e os guarde no vetor. Para isso utilize a estrutura de
//repetição WHILE. Ao final, exiba todos os valores com a estrutura de repetição FOR.
int numerosPares[10];
void setup()
{
  Serial.begin(9600);
    
    String numerosPares [10];
  
  
  
  int i = 0;//variavel
  while(i <= 9){
  Serial.println("Digite o " + String(i + 1) + "o numero");
  
    
    
  i++;//incremento da variavel de controle 
}
  
}//fim do setup


void loop()
{
  
}//fim do loop