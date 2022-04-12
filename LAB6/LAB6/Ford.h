#pragma once
#include "Car.h"
class Ford : public Car {
  public:
    Ford();
    int avgSpeed(int weather) override;
    int getFuelCons() override;
    int getFuelCap() override;
};
