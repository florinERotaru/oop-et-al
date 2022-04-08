#pragma once
class Car {
  protected:
    char name[10];
    int fuelCap;
    int fuelCons;
    virtual int avgSpeed(int weather) = 0;
};
