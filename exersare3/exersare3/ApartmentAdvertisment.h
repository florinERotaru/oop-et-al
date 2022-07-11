#pragma once
#include "Advertisment.h"
class ApartmentAdvertisment :public Advertisment {
    int atLevel;
  public:
    ApartmentAdvertisment(int surface, int price,int level);
    void SetLevel(int lvl);
};
