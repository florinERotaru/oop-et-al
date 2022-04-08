#define _CRT_SECURE_NO_WARNINGS
#include "Mazda.h"
#include <cstring>
int Mazda::avgSpeed(int weather) {
    switch (weather) {
    case 0: // rain
        return 80;
    case 1: // sunny
        return 120;
    case 2: // snow
        return 60;
    default:
        return 0;
    }

}

Mazda::Mazda() {
    fuelCap  = 40;
    fuelCons = 8;
    strcpy(name, "Mazda");
}
