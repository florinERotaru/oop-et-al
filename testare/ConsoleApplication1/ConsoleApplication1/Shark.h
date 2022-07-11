#pragma once
#include "Animal.h"
class Shark : public Animal {
  public:
    virtual std::string GetName() override;
    virtual bool IsAFish() override;
    virtual bool IsABird() override;
    virtual bool IsAMammal() override;
};
