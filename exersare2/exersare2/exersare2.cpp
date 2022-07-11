
#include <iostream>
#include "Number.h"
#include "Printer.h"
#include "Hexadecimal.h"
#include "Decimal.h"
int main()
{
    Number n1(1), n2(2), n3(10);
    Number n4((int) ((((n1 + n2) * n3) / n2) + (n1 - n2)));
    (n4.operator+=(new Hexadecimal())) += new Decimal();
    n4.Print();
    std::cout << "Valoarea hexazecimala este: " << std::hex << (int) n4 << std::endl;
    return 0;
}

