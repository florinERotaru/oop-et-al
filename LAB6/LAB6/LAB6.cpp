// LAB6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Weaher.h"
#include "Circuit.h"
#include "Car.h"

 int main()

{
    Circuit c;

    c.SetLength(100);

    c.SetWeather(Weather::Rain);

    c.AddCar(new Dacia());

    c.AddCar(new Toyota());

    c.AddCar(new Mercedes());

    c.AddCar(new Ford());

    c.AddCar(new Mazda());

    c.Race();

    c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to
                        // the   slowest.

    c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit

    return 0;
}

      //#include <iostream>
//
//using namespace std;
//class car {
//  public:
//    int x;
//    virtual int f() = 0;
//};
//class tire : public car {
//    int h;
//    int f() {
//        return 3;
//    }
//};
//int main() {
//    tire t;
//    t.x = 3;
//    return 0;
//}
