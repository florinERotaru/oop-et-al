#include "Number.h"
#include "Printer.h"
#include <iostream>
Number::Number(int value) {
    number = value;
    count  = 0;
}

Number::operator int() {
    return number;
}

Number Number::operator+(Number& n) {
    Number temp( (int)n + number);
    return temp;
}
Number Number::operator-(Number& n) {
    Number temp((int)number - n.number);
    return temp;
}
Number Number::operator*(Number& n) {
    Number temp((int)n * number);
    return temp;
}

Number Number::operator/(Number& n) {
    Number temp( number / (int)n);
    return temp;
}

Number& Number::operator+=(Printer* prnt) {
    printers.push_back(prnt);
    return *this;
}

void Number::Print() {
    for (auto elem : printers) {
        std::cout<<elem->GetFormatName()<<std::endl;
        std::cout << elem->FormatNumber(number)<<std::endl;
        
    }
}
