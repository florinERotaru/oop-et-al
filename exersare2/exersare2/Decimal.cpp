#include "Decimal.h"
#include <sstream>
#include <iostream>
std::string Decimal::GetFormatName() {
    return "Format: Decimal ";
}

std::string Decimal::FormatNumber(int number) {
    std::ostringstream ss;
    ss << "Value: " <<std::dec<< number;
    return ss.str();
}
