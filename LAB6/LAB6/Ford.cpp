#define _CRT_SECURE_NO_WARNINGS
#include "Ford.h"
#include <cstring>
int Ford::avgSpeed(int weather) {
    switch (weather) {
    case 0: // rain
        return 70;
    case 1: // sunny
        return 100;
    case 2: // snow
        return 60;
    default:
        return 0;
    }
}
Ford::Ford() {
    fuelCap  = 50;
    fuelCons = 10;
    strcpy(name, "Ford");
}
