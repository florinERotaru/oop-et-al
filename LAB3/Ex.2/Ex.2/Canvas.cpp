#include "Canvas.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

Canvas::Canvas(int width, int height) {
    this->width = width;
    this->height = height;
    memset(matrix, ' ', sizeof(matrix));
}
