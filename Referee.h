#pragma once

#include "Player.h"
#include "Human.h"
#include "Computer.h"

class Referee{
  public:
  Referee();
  Player *refGame(Player*,Player*);

};