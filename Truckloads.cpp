#include "Truckloads.h"



int Truckloads :: numTrucks(int numCrates, int loadSize){
  if(numCrates <= loadSize){
    return 1;
  }

  int temp = numCrates/2;
  return numTrucks(temp,loadSize) + numTrucks(numCrates-temp, loadSize);
}