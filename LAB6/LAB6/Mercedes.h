#pragma once
#include "Car.h"
class Mercedes : public Car {
  public:
    Mercedes();
    int avgSpeed(int weather) override;
};
