#pragma once
#include "Car.h"
class Dacia:public Car {
  public:
    Dacia();
     int avgSpeed(int weather) override;
};
