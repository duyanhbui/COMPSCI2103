#include "Human.h"

#include<iostream>

Human :: Human(){
  this->name = "Human";
}

Human :: Human(std :: string name = "Human"){
  this->name = name;
}

char Human :: makeMove(){
  char move;
  std :: cout << "Enter Move: ";
  std :: cin >> move;

  return move;

}
