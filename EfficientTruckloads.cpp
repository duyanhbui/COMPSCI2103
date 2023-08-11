#include "EfficientTruckloads.h"


int EfficientTruckloads :: numTrucks(int numCrates, int loadSize){
  static std :: unordered_map<int,int> cache;
  std :: unordered_map<int,int> :: iterator it;

  // for( auto it = cache.begin(); it != cache.end(); ++it){
  //   std :: cout << " numCrates: " << it->first << "| numT: " << it->second;
  // }
  std :: cout << std :: endl;
  it = cache.find(numCrates);
  if( it != cache.end()){
    return it->second;
  }

  if(numCrates <= loadSize){
    cache.insert(std :: pair<int,int>(numCrates,1));
    return 1;
  }
  int halve = numCrates/2;
  int numT = numTrucks(halve,loadSize) + numTrucks(numCrates-halve, loadSize);
  cache.insert(std :: pair<int,int>(numCrates,numT));
  return numT;
}