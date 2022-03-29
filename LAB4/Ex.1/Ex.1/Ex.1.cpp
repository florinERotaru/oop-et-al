
#include <iostream>
#include "Sort.h"
int main()
{
    bool ascendent;
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
    //S O R T A R E A
    s1.BubbleSort(ascendent=true);
    s2.InsertSort(ascendent=false);
    s3.QuickSort(ascendent = true);
    s4.QuickSort(ascendent = false);
    s5.QuickSort(ascendent = false);

    std::cout << "Afisare post-sortare: \n";
    s1.Print();
    s2.Print();
    s3.Print();
    s4.Print();
    s5.Print();
    return 0;
}
