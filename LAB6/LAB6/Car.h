#pragma once
class Car {
 protected:
    
    int fuelCap;
    int fuelCons;


  public:
    char name[10];
    virtual int avgSpeed(int weather) = 0;
    virtual int getFuelCap() = 0;
    virtual int getFuelCons() = 0;
};
