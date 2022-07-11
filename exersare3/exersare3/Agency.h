#pragma once
#include <vector>
#include "Advertisment.h"
class Agency {
    const char* name;
    std::vector<Advertisment*> ads;
  public:
    Agency(const char* name);
    void AddAdvertisment(Advertisment* a);
    void PrintOffers(int minSurface, int maxPrice);
};
