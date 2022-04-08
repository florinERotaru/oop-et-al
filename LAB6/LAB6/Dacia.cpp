#define _CRT_SECURE_NO_WARNINGS
#include "Dacia.h"
#include <cstring>
 int Dacia::avgSpeed(int weather)  {
    switch (weather) {
    case 0: // rain
        return 60;
    case 1: // sunny
        return 80;
    case 2: // snow
        return 43;
    }
}
Dacia::Dacia() {
    strcpy(name, "Dacia");
    fuelCap = 45;
    fuelCons = 8;
}
