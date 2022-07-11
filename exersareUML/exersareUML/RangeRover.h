#pragma once
#include "SUV.h"
class RangeRover:public SUV {
    int consum;
    std::string name;
  public:
    RangeRover();
    std::string getName() const override;
    void setConsum(int consum);
    int getConsum() const override;
};
