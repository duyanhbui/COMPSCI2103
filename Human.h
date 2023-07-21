#pragma once

#include "Player.h"


class Human : public Player{
  public:
  Human();
  Human(std :: string name);
  char makeMove();
};