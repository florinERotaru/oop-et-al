#pragma once
#include "Masina.h"
class MasinaOras : public Masina
{
  public:
    virtual int getCapacitate() const = 0;
    virtual std::string getCuloare() const = 0;
};

