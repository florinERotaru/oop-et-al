#include "RangeRover.h"

RangeRover::RangeRover() {
    name = "Range Rover";
}

std::string RangeRover::getName() const {
    return name;
}

void RangeRover::setConsum(int consum) {
    this->consum = consum;
}

int RangeRover::getConsum() const {
    return consum;
}
