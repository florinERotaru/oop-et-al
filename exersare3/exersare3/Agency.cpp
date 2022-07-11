#include "Agency.h"
#include <iostream>
Agency::Agency(const char* name) {
    this->name = name;
}

void Agency::AddAdvertisment(Advertisment* a) {
    ads.push_back(a);
}

void Agency::PrintOffers(int minSurface, int maxPrice) {
    for (auto offer : ads) {
        std::cout << offer->GetPrice() << " ";
    }
}
