#pragma once
#include "Car.h"
#include "Dacia.h"
#include "Ford.h"
#include "Mercedes.h"
#include "Mazda.h"
#include "Toyota.h"

class Circuit {
  private:
    int length;
    //Car* stopped[20];
    int carsNumber;
    //int stoppedNumber;
    int weather;
    
  public:
    Car* cars[20];
    Circuit();
    void AddCar(Car* model);
   // void AddStopped(Car* model);
    float Result(Car* candidate); // -1 daca se opreste, altfel, timpul de ajungere
    void SetWeather(int weather);
    void SetLength(int length);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();

};
