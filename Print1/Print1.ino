/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                           Print 1                           **
**                                                             **
**   NOM: Abel Picó                           Data:06/03/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************

int num = 64;

//*************************** SETUP *****************************

void setup() 
{
  Serial.begin(9600); 

  Serial.println("Different formats for the same number:");

  Serial.write(num);
  Serial.println();
  
  Serial.println(num);
  Serial.println(num,DEC);
  
  Serial.println(num,BIN);
  
  Serial.println(num,HEX);
  
  Serial.println(num,OCT);
  

}


//*************************** LOOP ******************************

void loop() 
{
 

}


//************************ FUNCIONS *****************************
