// C++ code
//
/* Autor: Leonardo Cassiano dos santos
   Dados: 23/08/2023
*/

#define        ledRed  		13
#define  	   ledYellow	12
#define  	   ledGreen	    10
#define 	   ledVermelho   7
#define 	   ledAmarelo    4
#define 	   ledVerde      2
#define ON 	   HIGH
#define OFF    LOW


void setup()
{
  pinMode(ledRed,     OUTPUT);//Farol da Esqueda
  pinMode(ledYellow,  OUTPUT);//Farol da Esqueda
  pinMode(ledGreen,   OUTPUT);//Farol da Esqueda
  pinMode(ledVermelho,OUTPUT);//Farol da Direita
  pinMode(ledAmarelo, OUTPUT);//Farol da Direita
  pinMode(ledVerde,   OUTPUT);//Farol da Direita
 
}

void loop()
{
  digitalWrite(ledRed,      ON);     // Acende  RED
  digitalWrite(ledYellow,   OFF);    // Apaga   Yellow
  digitalWrite(ledGreen,    OFF);    // Apaga   Green
  digitalWrite(ledVermelho, OFF);    // Apaga   Vermelho
  digitalWrite(ledAmarelo,  OFF);    // Apaga   Amarelo
  digitalWrite(ledVerde,    ON);     // Acende  Verde   
  delay(2000);
  digitalWrite(ledRed,      ON);     // Acende  Red
  digitalWrite(ledYellow,   OFF);    // apaga   Yellow
  digitalWrite(ledGreen,    OFF);    // Apaga   Green
  digitalWrite(ledVermelho, OFF);    // Apaga   Vermelho
  digitalWrite(ledAmarelo,  ON);     // Acende  Amarelo
  digitalWrite(ledVerde,    OFF);    // Apaga   Verde
  delay(1500);
  digitalWrite(ledRed,      OFF);    // Apaga   Red
  digitalWrite(ledYellow,   OFF);    // Apaga   Yellow
  digitalWrite(ledGreen,    ON);     // Acende  Green
  digitalWrite(ledVermelho, ON);     // Acende  Vermelho
  digitalWrite(ledAmarelo,  OFF);    // Apaga  Amarelo
  digitalWrite(ledVerde,    OFF);    // Apaga   Verde
  delay(2000);
  digitalWrite(ledRed,      OFF);    // Apaga   Red 
  digitalWrite(ledYellow,   ON);     // Acende  Yellow
  digitalWrite(ledGreen,    OFF);    // Apaga   Green
  digitalWrite(ledVermelho, ON);     // Acende  Vermelho
  digitalWrite(ledAmarelo,  OFF);    // Apaga   Amarelo
  digitalWrite(ledVerde,    OFF);    // Apaga   Verde
  delay(1500);
  digitalWrite(ledRed,      ON);     // Acende  Red
  digitalWrite(ledYellow,   OFF);    // Apaga   Yellow
  digitalWrite(ledGreen,    OFF);    // Apaga   Green
  digitalWrite(ledVermelho, OFF);    // Apaga   Vermelho
  digitalWrite(ledAmarelo,  OFF);    // Apaga   Amarelo
  digitalWrite(ledVerde,    ON);     // Acende  Verde
  delay(2000);
  digitalWrite(ledRed,      ON);     // Acende  Red
  digitalWrite(ledYellow,   OFF);    // Apaga   Yellow
  digitalWrite(ledGreen,    OFF);    // Apaga   Green 
  digitalWrite(ledVermelho, OFF);    // Apaga   Vemelho
  digitalWrite(ledAmarelo,  ON);     // Acende  Amarelo
  digitalWrite(ledVerde,    OFF);    // Apaga   Verde
  delay(1500);  
}
