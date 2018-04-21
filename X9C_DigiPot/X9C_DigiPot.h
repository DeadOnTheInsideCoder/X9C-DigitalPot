/*
   X9C_DigiPot.h - Library for controlling the X9C102 1kohm,
                               X9C103 10kohm,
                               X9C104 50kohm,
                               X9C503 100kohm.
   See the datasheet for PinConfig at https://www.intersil.com/content/dam/intersil/documents/x9c1/x9c102-103-104-503.pdf

   Created by Ilias D. , April 24 2018.
   Released into the public domain.  
*/

#ifndef X9C_DigiPot_h
#define X9C_DigiPot_h

#include <Arduino.h>


class DigiPot
{
  public:
      DigiPot(int CS,int INC,int CD);
      ~DigiPot();
      void ChipEnable();
      void ChipDisable();
      void Up();
      void Down();
      void Increment();
        
  private:
      int _CS;
      int _INC;
      int _CD;
};


#endif