#include "Opel.h"

Opel::Opel() {
    nume = "Opel";
}

void Opel::setCapacitate(int cap) {
    capacitate = cap;
}

void Opel::setCuloare(std::string cul) {
    culoare = cul;
}

void Opel::setAnFabricatie(int an) {
    anFabricatie = an;
}

int Opel::getAnFabricatie() {
    return anFabricatie;
}

int Opel::getCapacitate() const {
    return capacitate;
}

std::string Opel::getCuloare() const {
    return culoare;
}

std::string Opel::getName() const {
    return nume;
}



