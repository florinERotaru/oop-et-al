#pragma once
#include "Printer.h"
#include <vector>
class Number {
  public:
    int number;
    int count;
    std::vector<Printer*> printers;
  public:
    Number(int value);
    operator int();
    Number operator+(Number& n);
    Number operator-(Number& n);
    Number operator*(Number& n);
    Number operator/(Number& n);
    Number& operator+=(Printer* prnt);
    void Print();
    

    
};
