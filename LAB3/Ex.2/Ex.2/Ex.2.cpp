

#include <iostream>
#include "Canvas.h"
int main()
{
    char ch = '-';
    Canvas canvas(200,200);
    canvas.DrawCircle(20, 150, 10, 'o');
    canvas.FillCircle(20, 150, 10, ch);
    canvas.DrawRect(10, 20, 90, 40, ch);
    canvas.FillRect(10, 20, 90, 40, 'o');
    canvas.DrawLine(40, 10, 70, 60, 'o');
    canvas.Print();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
