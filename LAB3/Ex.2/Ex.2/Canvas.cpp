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
                matrix[i][j] = ch;
        }
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++) {
            if (distance(i, j, x, y) < ray)
                matrix[i][j] = ch;
        }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
    for (int i = left; i < right; i++)
        matrix[top][i] = ch;
    for (int i = left; i < right; i++)
        matrix[bottom][i] = ch;

    for (int i = top; i < bottom; i++)
        matrix[i][left] = ch;
    for (int i = top; i <= bottom; i++)
        matrix[i][right] = ch;

}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
    for (int i = top+1; i < bottom; i++)
        for (int j = left+1; j < right; j++)
            matrix[i][j] = ch;

}

void Canvas::SetPoint(int x, int y, char ch) {
    matrix[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {

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
