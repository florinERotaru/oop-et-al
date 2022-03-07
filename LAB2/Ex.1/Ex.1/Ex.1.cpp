#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include <stdlib.h> 
#include <iostream>
#include <time.h>
#include "NumberList.h"


int main()
{
    srand(time(NULL));
    NumberList list1;
    int choice = 0;
    printf("1 - Init \n");
    printf("2 - Add \n");
    printf("3 - Sort \n");
    printf("4 - Print \n");
    printf("5 - Leave \n");
    while (choice != 5) {
        std::cin >> choice;
        switch (choice) {
        case 1:
            list1.Init();
            break;
        case 2:
            list1.Add(rand() % 30);
            break;
        case 3:
            list1.Sort();
            break;
        case 4:
            list1.Print();
            break;
        case 5:
            break;
        }
    }
    return 0;
}

