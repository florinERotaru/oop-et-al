#include <stdio.h>
#include <algorithm> 
#include "NumberList.h"

void NumberList::Init() {
    count = 0;
}

bool NumberList::Add(int x) {
    if (count >= 10)
        return false;
    numbers[count] = x;
    count++;
    return true;
}

void NumberList::Sort() {
    std::sort(numbers, numbers + count);
}

void NumberList::Print() {
    for (int i = 0; i < count; i++)
        printf(" %d ", numbers[i]);

}