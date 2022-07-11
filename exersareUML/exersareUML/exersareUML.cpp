#include <iostream>
#include "Opel.h"
#include "Dacia.h"
#include "RangeRover.h"
using namespace std;

int main() {
    Opel o;
    o.setCapacitate(100);
    o.setCuloare("rosu");
    o.setAnFabricatie(2000);

    Dacia d;
    d.setCapacitate(200);
    d.setCuloare("albastru");

    RangeRover r;
    r.setConsum(10000);

    MasinaOras* m  = &o;
    MasinaOras* m2 = &d;
    SUV* m3        = &r;

    cout << m->getName() << ", " << m->getCuloare() << ", " << m->getCapacitate() << ", " << o.getAnFabricatie()
         << endl;
    cout << m2->getName() << ", " << m2->getCuloare() << ", " << m2->getCapacitate() << endl;
    cout << m3->getName() << ", " << m3->getConsum() << endl;
    return 1;
}