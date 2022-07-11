#include "Cow.h"

std::string Cow::GetName() {
    return "Cow";
}

bool Cow::IsAFish() {
    return false;
}

bool Cow::IsABird() {
    return false;
}

bool Cow::IsAMammal() {
    return true;
}
