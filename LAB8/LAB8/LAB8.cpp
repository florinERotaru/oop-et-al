// LAB8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
int main() {

    std::string s;
    std::fstream file_obj;
    int it = 0;
    file_obj.open("test.txt", std::fstream::in | std::fstream::out | std::fstream::app);
    std::getline(file_obj, s);

    return 0;
}
