void setup() {
  Serial.begin(9600);  // Inicia comunicação com o monitor serial
  
  
Serial.println("|------------------------------|");//primeira linha
Serial.println("|                              |");//segunda linha
Serial.println("|       LOPAL - EX03           |");//terceira linha
Serial.println("|                              |");//quarta linha
Serial.println("|------------------------------|");//ultima linha 

  
Serial.println();//pula uma linha
Serial.println();//pula uma linha
  
  Serial.println("Digite um número:");
}

void loop() {
  if (Serial.available()) {
    float numero = Serial.parseFloat();      // Lê o número digitado
    float dobro = numero * 2;                // Calcula o dobro

    Serial.print("Dobro: ");
    Serial.println(dobro);                   // Mostra o resultado

    Serial.println("Digite outro número:");
    delay(1000);  // Aguarda um pouco antes de aceitar novo número
  }
}
