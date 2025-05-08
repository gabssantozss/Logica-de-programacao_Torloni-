void setup() {
  Serial.begin(9600);
  
Serial.println("|------------------------------|");//primeira linha
Serial.println("|                              |");//segunda linha
Serial.println("|       LOPAL - EX04           |");//terceira linha
Serial.println("|                              |");//quarta linha
Serial.println("|------------------------------|");//ultima linha 

  
Serial.println();//pula uma linha
Serial.println();//pula uma linha
    
  
  
  
  
  
  Serial.println("Digite o peso (kg):");
}

void loop() {
  static int etapa = 0;
  static float peso = 0;
  static float altura = 0;

  if (Serial.available()) {
    float valor = Serial.parseFloat();

    if (etapa == 0) {
      peso = valor;
      Serial.println("Digite a altura (m):");
      etapa = 1;
    } else if (etapa == 1) {
      altura = valor;
      float imc = peso / (altura * altura);
      Serial.print("IMC: ");
      Serial.println(imc, 2);  // Mostra com 2 casas decimais
      Serial.println("Digite o peso (kg):");
      etapa = 0;
    }
  }
}
