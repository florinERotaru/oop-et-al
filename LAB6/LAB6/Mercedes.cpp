#define _CRT_SECURE_NO_WARNINGS
#include "Mercedes.h"   
#include <cstring>
int Mercedes::avgSpeed(int weather) {
    switch (weather) {
    case 0: // rain
        return 85;
    case 1: // sunny
        return 135;
    case 2: // snow
        return 65;
    default:
        return 0;
    }
}

Mercedes::Mercedes() {
    fuelCap  = 60;
    fuelCons = 12;
    strcpy(name, "Mercedes");
}
int Mercedes::getFuelCons() {
    return fuelCons;
}
int Mercedes::getFuelCap() {
    return fuelCap;
}
