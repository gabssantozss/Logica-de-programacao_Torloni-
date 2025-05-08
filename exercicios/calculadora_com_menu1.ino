// C++ code
//
//variaveis 
float numero1 = 0.0;
float numero2 = 0.0;
float soma;
float subtracao;
float multiplicacao;
float divisao;
int escolhaDaOperacao;
int contador = 0;

void setup()
{
  Serial.begin(9600);
    
    
  do {
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
      	soma = (numero1 + numero2);
      	Serial.println("WOW!!! o resultado foi: " + String(soma));
      
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
   