

#include <iostream>
#include "Canvas.h"
int main()
{
    char ch = '-';
    Canvas canvas(100,100);
   /* canvas.DrawCircle(50, 50, 10, 'o');
    canvas.FillCircle(50, 50, 10, ch);
    canvas.Clear();*/
    canvas.DrawRect(10, 20, 90, 40, ch);
    canvas.FillRect(10, 20, 90, 40, 'o');
    canvas.Print();


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
