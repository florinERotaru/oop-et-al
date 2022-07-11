#pragma once
#include "Animal.h"
#include "Feline.h"
#include <string>
#include <vector>
class Zoo {
    std::vector<Animal*> animals;

  public:
    std::vector<Animal*> GetFishes();
    std::vector<Animal*> GetBirds();
    std::vector<Animal*> GetMammals();
    std::vector<Feline*> GetFelines();
    int GetTotalAnimals();
    void operator+=(Animal*);
    bool operator()(std::string name);
};
