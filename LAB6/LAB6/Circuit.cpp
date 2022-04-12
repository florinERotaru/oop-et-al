#include "Circuit.h"

Circuit::Circuit() {
    carsNumber = 0;
    stoppedNumber = 0;
}

void Circuit::AddCar(Car* model) {
    *cars[carsNumber++] = *model;
}
void Circuit::AddStopped(Car* model) {
    *stopped[stoppedNumber++] = *model;
}

void Circuit::SetWeather(int weather) {
    this->weather= weather;
}

void Circuit::SetLength(int length) {
    this->length = length;  
}

void Circuit::Race() {
    for (int i = 0; i < carsNumber; i++) {
    }
}

void Circuit::ShowFinalRanks() {
}

void Circuit::ShowWhoDidNotFinish() {
}
