#include <iostream>

#include "Referee.h"


Referee :: Referee(){

}


Player* Referee :: refGame(Player* player1, Player* player2){
  char p1_Move = player1->makeMove();
  char p2_Move = player2->makeMove();

  if(p1_Move == p2_Move){
    std :: cout << "It's a Tie" << std :: endl;
    return nullptr;
  }else{
    if((p1_Move == 'S' and p2_Move == 'P') || (p1_Move == 'R' and p2_Move == 'S') || (p1_Move == 'P' and p2_Move == 'R')){
      std :: cout << player1->getName() <<" Wins." << std :: endl;
      return player1;
    }else{
      std :: cout << player2->getName() <<" Wins." << std :: endl;
      return player2;
    }
  }
  return nullptr;

}