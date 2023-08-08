#pragma once
#include "Truckloads.h"

class EfficientTruckloads : public Truckloads{
  public:
  void numTrucks_Helper(int numCrates, int loadSize, int& acc);
  int numTrucks(int numCrates, int loadSize) override;
};