#pragma once 
#include "MasinaOras.h"
class Opel: public MasinaOras {
    std::string nume;
    int capacitate;
    std::string culoare;
    int anFabricatie;
  public:
    Opel();
    void setCapacitate(int cap) ;
    void setCuloare(std::string cul);
    void setAnFabricatie(int an);
    int getAnFabricatie();
    int getCapacitate() const override;
    std::string getCuloare() const override;
    std::string getName() const override;

};
