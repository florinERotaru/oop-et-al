#include "Hexadecimal.h"
#include <sstream>
#include <iostream>
#include <iomanip>
std::string Hexadecimal::GetFormatName() {
    return "Format: Hexadecimal ";
}

std::string Hexadecimal::FormatNumber(int number) {
    std::ostringstream ss;
   ss << "Value: "
       << "0x" 
       <<  << std::hex << number;
    return ss.str();
}
