#include "Canvas.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
int distance(int x1, int y1, int x2, int y2) {
    return sqrt(abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2));
}

Canvas::Canvas(int width, int height) {
    this->width = width;
    this->height = height;
    Canvas::Clear();
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
    for (int i=0; i<height; i++)
        for (int j=0; j<width; j++) 
        {
            if (distance(i, j, x, y) == ray)
                Canvas::SetPoint(i, j, ch);
        }
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++) {
            if (distance(i, j, x, y) < ray)
                Canvas::SetPoint(i, j, ch);
        }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
    for (int i = left; i < right; i++)
        Canvas::SetPoint(top, i, ch);
    for (int i = left; i < right; i++)
        Canvas::SetPoint(bottom, i, ch);

    for (int i = top; i < bottom; i++)
        Canvas::SetPoint(i, left, ch);
    for (int i = top; i <= bottom; i++)
        Canvas::SetPoint(i, right, ch);

}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
    for (int i = top + 1; i < bottom; i++)
        for (int j = left + 1; j < right; j++)
            Canvas::SetPoint(i, j, ch);

}

void Canvas::SetPoint(int x, int y, char ch) {
    matrix[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
    int x  = x1;
    int y  = y1;
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    if ((y2 - y1) * (x2 - x1) < 0 || dy < dx) {
        std::cout << "SLOPE IS NEGATIVE";
        // slope <1
        int p = 2 * dy - dx;
        while (x <= x2) {
            Canvas::SetPoint(x, y, ch);
            x++;
            if (p < 0)
                p += 2 * dy;
            else {
                p += 2 * dy - 2 * dx;
                y++;
            }
        }
    } else {
        // slope >=1
        std::cout << "SLOPE IS POSITIVE";
        int p = 2 * dx - dy;
        while (y <= y2) {
            Canvas::SetPoint(x, y, ch);
            y++;
            if (p < 0)
                p += 2 * dx;
            else {
                p += 2 * dx - 2 * dy;
                x++;
            }
        }
    }
}

void Canvas::Print(){
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++)
            std::cout << matrix[i][j];
        std::cout << '\n';
    }    
}

void Canvas::Clear() {
    memset(matrix, ' ', sizeof(matrix));
}
