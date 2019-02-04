/***********************************************************************************                                                                              
**           TÍTOL: 03. Estructures de Control de Selecció if & switch Prog.03   **
**                                                                               **
** NOM: Dennis Garcia                                       DATA: 07/01/2019     **
**********************************************************************************

//********** Includes *************************************************************

//********** Variables ************************************************************/
int tempAigua = 101;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600); 
  
  if ( tempAigua < 90)
  {
    Serial.print("Aigua encara no bull");
  }
  else if ( tempAigua >= 90 & tempAigua < 100)
  {
    Serial.print("Aigua apunt de bullir");
  }
  else if (tempAigua == 100)
  {
    Serial.print("Aigua a 100C");
  }
  else
  {
    Serial.print("Aigua bullint");   
  }
}

//********** Loop *****************************************************************
void loop()  
{
}

//********** Funcions *************************************************************
