
#include <iostream>
#include "Math.h"
int main() {
    std::cout << Math::Add(3, 2) << std::endl;
    std::cout << Math::Add(3, 2, 1) << std::endl;
    std::cout << Math::Add(23.21 * 3.1, 2.0) << std::endl;
    std::cout << Math::Add(23.21 * 3.1, 2.0, 3.21) << std::endl;
    
    std::cout << Math::Mul(3, 2) << std::endl;
    std::cout << Math::Mul(3, 2, 1) << std::endl;
    std::cout << Math::Mul(23.21 * 3.1, 2.0) << std::endl;
    std::cout << Math::Mul(23.21 * 3.1, 2.0, 3.21) << std::endl;
    
    std::cout << Math::Add(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << std::endl;

    std::cout<<Math::Math::Add("sePareCa", "Functioneaza!");
}

