// Ex.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Vector.cpp"

int main()
{
    Vector<int> x;
    int y = 3;
    int u = 1;
    int z = 4;
    int inserted = 9999;
    x.Push(y);
    x.Push(u);
    x.Push(z);
    x.Print();
    x.Remove(1);
    x.Print();
    x.Push(y);
    x.Print();
    x.Insert(inserted, 2);
    x.Print();
    x.Sort(nullptr);
    x.Print();
    x.Set(2, 100);
    std::cout << "al 3lea element este " << x.Get(2)<<std::endl;

    return 0;
}

