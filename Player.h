#pragma once
#include <string>


class Player{
  public:
  std :: string name;

  virtual char makeMove() = 0;
  std :: string getName();
};