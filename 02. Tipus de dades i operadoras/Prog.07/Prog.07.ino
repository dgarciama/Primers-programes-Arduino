/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Tipus de Dades i Operadors - Prog.07  **
**                                                                               **
**   NOM: Dennis Garcia                                       DATA: 17/12/2018   **
**********************************************************************************/

//********** Variables ************************************************************
int test = 32767;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is ");
  Serial.println(test);
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}
