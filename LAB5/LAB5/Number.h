#pragma once
class Number

{
    char *x; // add data members
    int base;

  public:
    Number(const char* value, int base); // where base is between 2 and 16

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

};
int DigitNumber(int x);
      // add the following operators: addition, subtraction, 
//index operator, relation operators
//(> , < , >= , <=, ==, etc)

