
#include <iostream>
#include "Sort.h"
int main()
{
    std::cout << "Afisare pre-sortare: \n";
    Sort s1(10, 30,50);
    s1.Print();
    Sort s2;
    s2.Print();
    int s3_vect[10] = { 4, 73, 1, 31, 543, 765, 65, 98, 32, 10 };
    Sort s3(s3_vect, 10);
    s3.Print();
    Sort s4(7, 12, 424, 67, 32, 98, 32, 76);
    s4.Print();
    Sort s5( "12,3,6,8,53,2");
    s5.Print();

    s5.QuickSort(true);
    s5.Print();

    return 0;
}
