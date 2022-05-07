// Ex.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vector.h"
#include "Vector.cpp"
int main()
{
    Vector<int> x;
    int y = 3;
    /*for (int i = 0; i < 30; i++) {
        x.list[i]  = new int;
        *x.list[i] = i;
    }*/
    
    
    x.Push(7);
    x.Push(3);
    for (int i = 0; i < 2; i++)
        std::cout << *x.list[i] << std::endl;
    //std::cout << *(x.list[1]);
    return 0;
}

