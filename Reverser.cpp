#include "Reverser.h"

Reverser :: Reverser(){

}



std :: string Reverser :: reverseString(std :: string characteres){
  if(characteres.size() == 1){
    return characteres;
  }

  return reverseString(characteres.substr(1,characteres.size()-1)) + characteres.front();
}


void Reverser :: reverseDigitHelper(int dg, int& acc){
  if(dg == 0){
    return;
  }

  acc = 10*acc + dg%10;
  reverseDigitHelper(dg/10,acc);

}

int Reverser :: reverserDigit(int digits){
  if(digits < 0){
    return -1;
  }
  int acc = 0;
  reverseDigitHelper(digits,acc);

  return acc;
}