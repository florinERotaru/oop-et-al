#pragma once
#include "Car.h"
class Mazda : public Car {
  public:
    Mazda();
    int avgSpeed(int weather) override;
    int getFuelCons() override;
    int getFuelCap() override;
};
