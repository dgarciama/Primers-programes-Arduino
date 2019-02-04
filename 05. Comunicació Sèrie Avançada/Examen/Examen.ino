/**********************************************************************************
**                                                                               **
**                                     TÍTOL: EXAMEN Comunicació Sèrie Avançada  **
**                                                                               **
**   NOM: Dennis Garcia                                       DATA: 04/02/2019   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float J = 13;
int a = 39422358;
int c = J;
//********** Setup ****************************************************************
void setup() {
  Serial.begin(9600);
  Serial.println("Introdueix el DNI 39422358 i et calculo la lletra");
}
//********** Loop *****************************************************************
void loop()
{
   while (Serial.available() > 1) {

    a = Serial.parseInt(); 
    Serial.print("39422358 = ");
    Serial.println(c);
    Serial.print("És el teu residu del DNI que correspon a la lletra J");
    }
}
