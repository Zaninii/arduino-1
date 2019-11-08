/**
   Estudo das estruturas de controle condicional
   @author Enzo Zanini Ozório
*/

void setup() {
  Serial.begin(9600);
  int idade = 21;
  if (idade < 18) {
    Serial.print("Menor de idade");
  } else Serial.print("Maior de idade");

}

void loop() {
  // put your main code here, to run repeatedly:

}
