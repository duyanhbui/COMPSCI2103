#include "EfficientTruckloads.h"


void EfficientTruckloads :: numTrucks_Helper(int numCrates, int loadSize, int& acc){
  if(numCrates <= loadSize){
    acc += 1;
    return;
  }

  int temp = numCrates/2;
  numTrucks_Helper(temp,loadSize,acc);
  numTrucks_Helper(numCrates-temp,loadSize,acc);

}


int EfficientTruckloads :: numTrucks(int numCrates, int loadSize){
  int acc = 0;
  numTrucks_Helper(numCrates, loadSize, acc);

  return acc;
}