#include "Zoo.h"
#include "Feline.h"
#include <iostream>
std::vector<Animal*> Zoo::GetFishes() {
    return std::vector<Animal*>();
}
std::vector<Animal*> Zoo::GetBirds() {
    return std::vector<Animal*>();
}
std::vector<Animal*> Zoo::GetMammals() {
    std::vector<Animal*> feline;
    for (auto animal : animals) {
        if (animal->IsAMammal())
            feline.push_back( animal);
    }
    return feline;
}
std::vector<Feline*> Zoo::GetFelines() {
    std::vector<Feline*> feline;
    for (auto animal : animals) {
        if (animal->GetName() == "Lion" || animal->GetName() == "Tiger")
            feline.push_back((Feline*) animal);
    }
    return feline;
}

int Zoo::GetTotalAnimals() {
    return animals.size();
}

void Zoo::operator+=(Animal* an) {
    animals.push_back(an);
}

bool Zoo::operator()(std::string name) {
    for (auto animal : animals) {
        if (animal->GetName() == name)
            return true;
    }
    return false;
            
}
