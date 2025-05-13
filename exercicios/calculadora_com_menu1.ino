//variaveis 

float soma;
float subtracao;
float multiplicacao;
float divisao;
int escolhaDaOperacao;
int contador = 0;
float resultado;

float somar (float numero1, float numero2, int numero3 = 2){
  return (numero1 + numero2 + numero3);
  //numero3 parametro da funcao somar

return (numero1 + numero2);
}

void subtrair (float numero1Param, float numero2Param){
 resultado = numero1Param - numero2Param;
 Serial.println("WOW!!! O resultado foi: " + String(resultado));

}
  
  void multiplicar (float numero1Param, float numero2Param) {
 resultado = numero1Param * numero2Param;
 Serial.println("WOW!!! O resultado foi: " + String(resultado));
  }   
   
    void dividir (float numero1Param, float numero2Param){
 resultado = numero1Param / numero2Param;
 Serial.println("WOW!!! O resultado foi: " + String(resultado));   

}



void setup()
{
  Serial.begin(9600);
    
    
  do {
    
    float numero1 = 0.0;
    float numero2 = 0.0;
    Serial.println("Bem-vindo(a) a calculadora mega inteligente !");
    Serial.println("Escolha uma das opcoes/operacoes:");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");
    Serial.println("3 - Multiplicar");
    Serial.println("4 - Dividir");

    while(!Serial.available()){} //Espera o usuario digitar

    escolhaDaOperacao = Serial.parseInt(); //Armazena o que o usuario digitou na variavel 

    Serial.println("Agora, para realizar a operacao, digite 1o numero: ");
    while(!Serial.available()){} //Espera o usuario digitar
    numero1 = Serial.parseFloat();


    Serial.println("Agora, para realizar a operacao, digite 2o numero: ");
    while(!Serial.available()){} //Espera o usuario digitar
    numero2 = Serial.parseFloat();
    
    switch(escolhaDaOperacao){   
      
      case 4:
      	divisao = (numero1 / numero2);
      	Serial.println("WOW!!! o resultado foi: " + String(divisao));

      	break;
      
      case 3:
      	multiplicacao = (numero1 * numero2);
      	Serial.println("WOW!!! o resultado foi: " + String(multiplicacao));
      
      	break;
      
      case 2: 
      	subtracao = numero1 - numero2;
       	Serial.println("WOW!!! o resultado foi: " + String(subtracao));
        
      	break;
      
      case 1:
     float resultado = somar (numero1, numero2);
      Serial.println("WOW!!! o resultado foi: " + String(resultado));
      
      	break;
    }
 

    Serial.println("voce deseja continuar? se sim, digite S, se nao, digite N");
    while (!Serial.available()){} //espera o usuario digitar
  

    if(Serial.readString() == "S"){
      contador++;
    }
    else{
      contador = 0;
      Serial.println("Ate breve, volte mais vezes!! Estamos te esperando.");
      Serial.println("Caso queira voltar, reinice o sistema");
    }
  }
  while(contador != 0);
      
}
  
void loop()
  
{
//sem codigo  
}
   