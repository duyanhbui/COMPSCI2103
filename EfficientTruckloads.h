#pragma once

#include<iostream>
#include <unordered_map>

#include "Truckloads.h"

class EfficientTruckloads : public Truckloads{
  public:
  int numTrucks(int numCrates, int loadSize) override;
};