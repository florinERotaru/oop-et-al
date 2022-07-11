#pragma once
#include "Masina.h"
class SUV :public Masina {
  public:
    virtual std::string getName() const = 0;
    virtual int getConsum() const = 0;
};
