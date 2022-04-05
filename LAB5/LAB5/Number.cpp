#define _CRT_SECURE_NO_WARNINGS
#include "Number.h"
#include <cstdio>
#include <cstring>
#include <stdlib.h>
int val(char c) {
    if (c >= '0' && c <= '9')
        return (int) c - '0';
    else
        return (int) c - 'A' + 10;
}

int toDeci(char* str, int base) {
    int len   = (int) strlen(str);
    int power = 1;
    int num   = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (val(str[i]) >= base) {
            printf("Invalid Number");
            return -1;
        }
        num += val(str[i]) * power;
        power = power * base;
    }
    return num;
}

char reVal(int num) {
    if (num >= 0 && num <= 9)
        return (char) (num + '0');
    else
        return (char) (num - 10 + 'A');
}

char* fromDeci(int base, int inputNum) {
    char* res = new char[DigitNumber(inputNum) * 4 + 1];
    int i     = 0;
    char aux;
    while (inputNum > 0) {
        res[i] = reVal(inputNum % base);
        inputNum /= base;
        i++;
    }
    res[i] = '\0';
    for (i = 0; i < strlen(res) / 2; i++) {
        aux                      = res[i];
        res[i]                   = res[strlen(res) - i - 1];
        res[strlen(res) - i - 1] = aux;
    }
    return res;
}

void Number::SwitchBase(int newBase) {

    int num = toDeci(x, base);
    this->x   = fromDeci(newBase, num);
    this->base     = newBase;
}

void Number::Print(){
    printf("%s\n", x);
}

int Number::GetDigitsCount() {
    return strlen(x);
}

Number& Number::operator--() {//--x
      //remove the first      // TODO: insert return statement here
    for (int i = 0; i < strlen(x)-1; i++)
        x[i] = x[i+1];
    x[strlen(x) - 1] = '\0';
    return *this;
}

Number& Number::operator--(int) { //--x
    x[strlen(x) - 1] = '\0';
    return *this;
}

Number& Number::operator+=( Number& num) {

    *this = operator+(*this, num);
    return *this;
    // TODO: insert return statement here
}

Number& Number::operator=(const Number& num) {
    //strcpy(x, num.x);
    x    = new char[strlen(num.x) + 1];
    strcpy(x, num.x);
    base = num.base;
    return *this;
}
Number& Number::operator=(int n) {
    delete x;
    x         = new char[DigitNumber(n) + 1];
    char* str = new char[DigitNumber(n) + 1];
    itoa(n, str, 10);
    strcpy(x, str);
    return *this;
    // TODO: insert return statement here
}
Number& Number::operator=(const char* str) {
    delete x;
    x = new char[strlen(str) + 1];
    strcpy(x, str);
    return *this;
    // TODO: insert return statement here
}
//= operator for integers;
Number::Number(const char* value, int base) {
     x = new char[strlen(value) + 1];
    this->base = base;
}

Number::Number(int value) {
    x = new char[DigitNumber(value) + 1];
    base = 10;
}

Number::Number(const Number& n) { //copy ctor 
    //strcpy(x, n.x);
    //delete
    x    = strdup(n.x);
    base = n.base;

}


Number::Number(Number&& n) {
    x = n.x;
    base = n.base;
    n.x  = nullptr;
    n.base = 0;
}

Number::~Number() {
    delete[] x;
}

Number operator+(Number& n3, Number& n4) {
    int b = n3.base;
    Number n1 = n3;
    Number n2 = n4;
    if (n2.base != n1.base)
        if (n2.base > n1.base) {
            b = n2.base;
            n1.SwitchBase(b);
        } else {
            b = n1.base;
            n2.SwitchBase(b);
        }
    n1.SwitchBase(10);
    n2.SwitchBase(10);
    int x = atoi(n1.x);
    int y = atoi(n2.x);
    x += y;
    char* res = new char[n1.GetDigitsCount() + n2.GetDigitsCount() + 1];
    itoa(x, res, b);
    return { res, b };
}

Number operator-(Number& n3, Number& n4) {

    int b = n3.base;
    Number n1 = n3;
    Number n2 = n4;
    if (n2.base != n1.base)
        if (n2.base > n1.base) {
            b = n2.base;
            n1.SwitchBase(b);
        } else {
            b = n1.base;
            n2.SwitchBase(b);
        }
    n1.SwitchBase(10);
    n2.SwitchBase(10);
    int x = atoi(n1.x);
    int y = atoi(n2.x);
    x -= y;
    char* res = new char[n1.GetDigitsCount() + n2.GetDigitsCount()+1];
    itoa(x, res, b);
    return { res, b };
}

int DigitNumber(int x) {

        int k = 1;
        while (x > 1) {
            x /= 10;
            k++;
        }
        return k;
}
