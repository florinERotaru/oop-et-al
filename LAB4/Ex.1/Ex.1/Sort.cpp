#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include "cstdarg"
#include <iostream>
#include <ctime>
Sort::Sort(int total, int min, int max)
{ 
	list = new int[total];
    count = total;
    for (int i = 0; i < total; ++i)
        list[i] = rand() % (max + 1 - min) + min;
    //max - min = lungime interval
}

Sort::Sort(): list(new int[12] {1,2,3,4,5,6,7,8,9,10,11,12}) {
    count = 12;
}

Sort::Sort(int* vtor, int k) 
{ 
    count = k;
    list = new int[k];
    for (int i = 0; i < k; ++i)
        list[i] = vtor[i];
}

Sort::Sort(int count, ...) {
    this->count = count;
    list = new int[count];
    va_list args;
    va_start(args, count);
    int val = 0;
    for (int i=0; i<count; i++) 
    {
        val = va_arg(args, int);
        list[i] = val;
    }
    va_end(args);
}

Sort::Sort(const char* chr) {

    char* c   = new char[strlen(chr)+1];
    strcpy(c, chr);
    int count = 1;
    for (int i = 0; i < strlen(c); ++i)
        if (c[i] == ',')
            count++;
    list = new int[count];
    this->count = count;
    char* part;
    part = strtok(c, ",");
    int index = 0;
    while (part != nullptr) 
    {
        list[index] = atoi(part);
        index++;
        part = strtok(nullptr, ",");
    }
    delete[] c;
}

int partition(int v[10], int p, int q) {
    int x   = v[p];
    int i   = p + 1;
    int j   = q;
    int k   = 0;
    int aux = 0;
    while (i <= j) {
        if (v[i] <= x)
            i++;
        if (v[j] >= x)
            j--;
        if ((i < j) && (v[i] > x) && (x > v[j])) {
            aux  = v[i];
            v[i] = v[j];
            v[j] = aux;
            i++;
            j--;
        }
    }
    k    = i - 1;
    v[p] = v[k];
    v[k] = x;
    return k;
}

void Quick(int v[10], int p, int q) {
    if (p < q) {
        int k = partition(v, p, q);
        Quick(v, p, k - 1);
        Quick(v, k + 1, q);
    }
}

void Sort::InsertSort(bool ascendent) {
    for (int i = 0; i < count; ++i) {
        int j    = i - 1;
        int temp = list[i];
        while (j >= 0 && list[j] > temp) {
            list[j + 1] = list[j];
            --j;
        }
        list[j + 1] = temp;
    }
    if (!ascendent)
        inverse();
}
void Sort::QuickSort(bool ascendent) {
    int p = 0;
    int q = this->GetElementsCount()-1;
    Quick(list, p, q);
    if (!ascendent)
        inverse();
}

void Sort::BubbleSort(bool ascendent) {
    int last = count-1 ;
    while (last > 0) {
        int n = last;
        last  = 0;
        for (int i=0; i<n; ++i)
            if (list[i] > list[i + 1]) {
                int aux = list[i];
                list[i] = list[i + 1];
                list[i + 1] = aux;
                last        = i;
            }
                
    }
    if (!ascendent)
        inverse();
}

void Sort::Print() const {
    for (int i = 0; i < count; ++i)
        std::cout << list[i] << ", ";
    std::cout << "\n";
}

int Sort::GetElementsCount() {
    return count;
}

void Sort::inverse() 
{
    int aux = 0;
    for (int i=0; i<count/2; ++i ) {
        aux = list[i];
        list[i] = list[count - 1 - i];
        list[count - 1 - i] = aux;
    }
}

int Sort::GetElementFromIndex(int index) {
    return list[index];
}
