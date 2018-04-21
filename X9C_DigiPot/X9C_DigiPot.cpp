/*
   X9C_DigiPot.cpp - Library for controlling the X9C102 1kohm,
                               X9C103 10kohm,
                               X9C104 50kohm,
                               X9C503 100kohm.
   See the datasheet for PinConfig at https://www.intersil.com/content/dam/intersil/documents/x9c1/x9c102-103-104-503.pdf
   
   Created by Ilias D. , April 24 2018.
   Released into the public domain.   
*/

#include "X9C_DigiPot.h"


DigiPot::DigiPot(int CS,int INC,int CD)
{
 _CS = CS;
 _INC = INC;
 _CD = CD;
 pinMode(CS,OUTPUT);
 pinMode(INC,OUTPUT);
 pinMode(CD,OUTPUT);
 digitalWrite(CS,HIGH);
}

DigiPot::~DigiPot()
{
}
void DigiPot::ChipEnable()
{
 digitalWrite(_CS,LOW);
}

void DigiPot::ChipDisable()
{
 digitalWrite(_CS,HIGH);
}

void DigiPot::Up()
{
 digitalWrite(_CD,HIGH);
}

void DigiPot::Down()
{
 digitalWrite(_CD,LOW);
}

void DigiPot::Increment()
{
 digitalWrite(_INC,HIGH);
 digitalWrite(_INC,LOW);
}