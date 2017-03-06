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
  Serial.println(num,DEC); //escriu el número en sistema decimal
  
  Serial.println(num,BIN);//l'escriu en sist binari
  
  Serial.println(num,HEX);//l'escriu en sist hexadecimal
  
  Serial.println(num,OCT);//l'escriu en sist octal
  

}


//*************************** LOOP ******************************

void loop() 
{
 

}


//************************ FUNCIONS *****************************
