// C++ code
// variaveis global
//vetor tamanho 6: vai de 0 ate 5
String fruta[6];//cria  um vetor tamanho 6 (preenchendo)
float precosFrutas[6];
void setup()
{
  Serial.begin(9600);
  
  Serial.println("*** SACOLAO DO ZEH ***");
  Serial.println();
  
  Serial.println("Oh ZEH bora cadastrar as frutas!!");
  
  Serial.println();
  //pede as frutas para o usuario
   for (int i = 0; i <= 5; i++){
     
    //pega a fruta do usuario 
    Serial.println("informe a fruta:"+ String(i + 1) + "a fruta:");
    while(!Serial.available());
    String frutaDigitada = Serial.readString();
    
   //pega o preco da fruta 
    Serial.println("Qual o preco de:"+ frutaDigitada + "?");
    while(!Serial.available());
    float precoDigitada = Serial.parseFloat();
  
    
    //poe a fruta na sacola / cadastra a fruta no array/vetor
  fruta[i] = frutaDigitada;
  precosFrutas[i] = precoDigitada;
  
 } 
    for (int i = 0; i <= 4; i++){
    Serial.println(String(i + 1) + "a fruta:" + fruta [i]  );
    
    
  Serial.println("1a fruta:" + fruta[0]);
  Serial.println("preco da 1a fruta: " + String(fruta[i]));
    }
}

void loop()
 {
 
 }
