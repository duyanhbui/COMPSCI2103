#pragma once

#include <string>


class Reverser{
  public:
  Reverser();
  std :: string reverseString(std :: string characters);
  void reverseDigitHelper(int dg, int& acc);
  int reverserDigit(int digits);
};