//variaveis
int tabuadaEscolhida; 
int resultado;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
Serial.println("Escolha a tabuada:"); //espere o usuario digitar 
while(!Serial.available()){} //espera o usuario  
tabuadaEscolhida = Serial.parseInt();
  
  
  for(int contador = 1; contador <= 10; contador++){
  resultado = tabuadaEscolhida * contador;
  // exibir assim: 2 X 1 = 2
  Serial.println(String(tabuadaEscolhida)+ "X" + String(contador)+ "=" + String(resultado));  
   Serial.println("a tabuada eh:" + String(resultado));
    
    
  }
  
  
  
  
  
  
}