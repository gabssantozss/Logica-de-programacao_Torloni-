void setup() {
  Serial.begin(9600);  // Inicia comunicação com o monitor serial
  
Serial.println("|------------------------------|");//primeira linha
Serial.println("|                              |");//segunda linha
Serial.println("|       LOPAL - EX05           |");//terceira linha
Serial.println("|                              |");//quarta linha
Serial.println("|------------------------------|");//ultima linha 

  
Serial.println();//pula uma linha
Serial.println();//pula uma linha
   
  
  
  
  
  
  Serial.println("Digite a medida em centímetros:");
}

void loop() {
  if (Serial.available()) {
    float cm = Serial.parseFloat();              // Lê valor em cm
    float polegadas = cm / 2.54;                 // Converte para polegadas

    Serial.print("Resultado: ");
    Serial.print(polegadas);
    Serial.println(" polegadas");

    Serial.println("Digite outra medida em cm:");
    delay(1000); // Espera 1 segundo antes de aceitar novo valor
  }
}
