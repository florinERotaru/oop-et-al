#pragma once
#include "MasinaOras.h"
class Dacia : public MasinaOras {
    int capacitate;
    std::string nume;
    std::string culoare;
  public:
    Dacia();
    void setCapacitate(int cap);
    void setCuloare(std::string culoare);
    int getCapacitate() const override;
    std::string getCuloare() const override;
    std::string getName()const override;
};
