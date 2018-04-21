/*
   X9C_DigiPot.ino - Example for controlling the X9C102 1kohm,
                               X9C103 10kohm,
                               X9C104 50kohm,
                               X9C503 100kohm.
   See the datasheet for PinConfig at https://www.intersil.com/content/dam/intersil/documents/x9c1/x9c102-103-104-503.pdf

   Created by Ilias D. , April 24 2018.
   Released into the public domain.  
*/

#include <X9C_DigiPot.h>

DigiPot digiPot(4,5,6); 
                /*Creates an instance in the DigiPot class
                 and passing 3 arguments to the constructor
                 Chip Enable,Increment,Control Direction
                 */
void setup() 
{
 digiPot.ChipEnable();
}

void loop() 
{ 
 digiPot.Up(); //Up
 
 for(int i =0;i<100;i++) // Going up from 0 to 99
 {
  digiPot.Increment(); //Inrement 1 Up
  delay(100);   //Delay
 }

 digiPot.Down();
 for(int i =0;i<100;i++) // Going down from 99 to 0
 {
  digiPot.Increment(); //Decrement 1 Down
  delay(100);      //Delay
 }
}
