#include "Dacia.h"
Dacia::Dacia() {
    nume = "Dacia";
}

void Dacia::setCapacitate(int cap) {
    capacitate = cap;
}

void Dacia::setCuloare(std::string culoare) {
    this->culoare = culoare;
}

int Dacia::getCapacitate() const {
    return capacitate;
}

std::string Dacia::getCuloare() const {
    return culoare;
}

std::string Dacia::getName() const {
    return nume;
}
