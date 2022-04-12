#pragma once
#include "Car.h"
class Toyota:public Car {
  public:
    Toyota();
    int avgSpeed(int weather) override;
    int getFuelCons() override;
    int getFuelCap() override;
};
