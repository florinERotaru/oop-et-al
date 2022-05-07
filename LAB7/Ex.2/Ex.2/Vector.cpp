#include "Vector.h"
#include <iostream>
template <class T>
Vector<T>::Vector() {

    count = 0;
    list  = new T*[30];

}

template <class T>
void Vector<T>::Push( const T &t) {
    list[count] = new T;    
    *list[count++] = t;
}

