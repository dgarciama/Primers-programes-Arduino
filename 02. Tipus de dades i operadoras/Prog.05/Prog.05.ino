/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Tipus de Dades i Operadors - Prog.03  **
**                                                                               **
**   NOM: Dennis Garcia                                       DATA: 10/12/2018   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int drive_gb = 100;
long drive_mb = 0;
//********** Setup ****************************************************************
void setup()             
{
  Serial.begin(9600);     
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;


  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}
//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************
