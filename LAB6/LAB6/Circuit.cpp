#include "Circuit.h"
#include <iostream>
Circuit::Circuit() {
    carsNumber = 0;
   // stoppedNumber = 0;
}

void Circuit::AddCar(Car* model) {
    cars[carsNumber++] = model;
    //pun adresa direct
}
//void Circuit::AddStopped(Car* model) {
//    stopped[stoppedNumber++] = model;
//}

void Circuit::SetWeather(int weather) {
    this->weather= weather;
}

void Circuit::SetLength(int length) {
    this->length = length;  
}

void Circuit::Race() {
    int last = carsNumber;
    while (last != 0) {
        int n = last;
        last = 0;
        for (int i = 0; i < n - 1; i++)
            if ((Result(cars[i]) > 0) && Result(cars[i]) > Result(cars[i + 1])) {
                Car* temp;
                temp = cars[i];
                cars[i] = cars[i + 1];
                cars[i + 1] = temp;
                last=i;
            }
    }
}

void Circuit::ShowFinalRanks() {
    int poz = 1;
    for (int i = 0; i < carsNumber; i++)
        if (Result(cars[i]) > 0)
            std::cout << "Pe locul " << poz++ << " "<< cars[i]->name << " timp: " << Result(cars[i])<<" ore " << std::endl;

}

float Circuit::Result(Car* candidate) {
    
    float consum = length / 100;
    int fuelUsed = candidate->getFuelCons()*consum;
    if (fuelUsed > candidate->getFuelCap())
        return -1;
    return (float)(length / candidate->avgSpeed(weather));
}

void Circuit::ShowWhoDidNotFinish() {
    std::cout << "Nu au reusit:" << std::endl;
    for (int i = 0; i < carsNumber; i++)
        if (Result(cars[i]) < 0)
            std::cout << cars[i]->name << "(capac.: " << cars[i]->getFuelCap() << "litri, are nevoide de "<<(float)cars[i]->getFuelCons()*(length/100)<<")"<<std::endl;
}
