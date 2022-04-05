#pragma once
class Number

{
    char *x; // add data members //pt int*
            //*ptr1=*ptr2(new int inainte)
    int base;

  public:
    Number(const char* value, int base); // where base is between 2 and 16
    Number(int value); 
    Number(const Number& n);
    Number(Number&& n);
    ~Number();

    // add operators and copy/move constructor

    void SwitchBase(int newBase);

    void Print();

    int GetDigitsCount(); // returns the number of digits for the current number

    int GetBase(); // returns the current base
    friend Number operator+(Number& n1, Number& n2);
    friend Number operator-(Number& n1, Number& n2);
    Number& operator--();
    Number& operator--(int);
    Number& operator+=( Number& num );
    Number& operator=(const Number& num);
    Number& operator=(int n);
    Number& operator=(const char *str);
};
int DigitNumber(int x);
      // add the following operators: addition, subtraction, 
//index operator, relation operators
//(> , < , >= , <=, ==, etc)

