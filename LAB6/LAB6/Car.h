#pragma once
class Car {
 protected:
    char name[10];
    int fuelCap;
    int fuelCons;


  public:
    virtual int avgSpeed(int weather) = 0;
    virtual int getFuelCap() = 0;
    virtual int getFuelCons() = 0;
};
