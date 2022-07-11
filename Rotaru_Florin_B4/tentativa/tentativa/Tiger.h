#pragma once
#include "Feline.h"
class Tiger : public Feline {
  public:
    virtual int GetSpeed() override;
    virtual std::string GetName() override;
    virtual bool IsAFish() override;
    virtual bool IsABird() override;
    virtual bool IsAMammal() override;
};
