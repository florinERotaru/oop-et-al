#define _CRT_SECURE_NO_WARNINGS
#include "Toyota.h"
#include "cstring"
int Toyota::avgSpeed(int weather) {
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
Toyota::Toyota() {
    strcpy(name, "Toyota");
    fuelCap  = 50;
    fuelCons = 7;
}
