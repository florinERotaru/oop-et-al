#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdarg>
#include <cstring>
#include <cstdlib>
#include "Math.h"
int Math::Math::Add(int x, int y) {

    return x+y;
}

int Math::Math::Add(int x, int y, int z) {
    return x+y+z;
}

int Math::Math::Add(double x, double y) {
    return x+y;
}

int Math::Math::Add(double x, double y, double z) {
    return x+y+z;
}

int Math::Mul(int x, int y) {
    return x*y;
}

int Math::Mul(int x, int y, int z) {
    return x*y*z;
}

int Math::Mul(double x, double y) {
    return x*y;
}

int Math::Mul(double x, double y, double z) {
    return x*y*z;
}

int Math::Math::Add(int count, ...) {
    int sum = 0;
    int elem = 0;
    va_list args;
    va_start(args, count);
    do {
        elem = va_arg(args, int); 
        sum += elem;
        count--;
    } while (count > 0);

    return sum;
}

char* Math::Math::Add(const char* c1, const char* c2) {
    if (c1 == nullptr || c2 == nullptr)
        return nullptr;
    int size_c = strlen(c1) + strlen(c2) + 1;
    char* s    = (char*) calloc(size_c, sizeof(char));
    strcat(s, c1);
    strcat(s, c2);
    return s;
}

