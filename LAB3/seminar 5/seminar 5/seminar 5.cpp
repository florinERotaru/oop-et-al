// seminar 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
#include <iostream>

using namespace std;
class Integer {
    int value;

  public:
    Integer(int val) : value(val) {}
    friend int operator+(const Integer& i, float val);
    friend int operator+(float val, const Integer& i);
};

int operator+(const Integer& i, float val) {
    cout << i.value;
    return i.value + (int) val;
    
}

int operator+(float val, const Integer& i) {
    cout << 3;
    return i.value + (int) val;
        
}

int main() {
    Integer n1(100);
    Integer n2(200);
    int y = 12.3f+n2;

    return 0;
}
