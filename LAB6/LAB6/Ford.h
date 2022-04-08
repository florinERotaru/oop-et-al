#pragma once
#include "Car.h"
class Ford : public Car {
  public:
    Ford();
    int avgSpeed(int weather) override;
};
