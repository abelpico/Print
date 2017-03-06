/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                           Print 2                           **
**                                                             **
**   NOM: Abel Picó                           Data:06/03/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************

int thisByte = 33;

//*************************** SETUP *****************************

void setup() 
{

  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Character Map");

}


//*************************** LOOP ******************************
/*Aquest programa mostra la relació entre els caràcters de la
  taula ASCII*/
void loop()
{
  Serial.write(thisByte);    
  
  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   

  if(thisByte == 126)
  /* si la variable val 126, s'acabarà el programa, perquè
     entrarà en un bucle infinit del while que esta buit*/
  { 
    while(true)
    { 
    } 
  } 
  thisByte++;     // suma 1 a la variable


}


//************************ FUNCIONS *****************************
