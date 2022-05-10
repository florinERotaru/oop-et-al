#include <iostream>
#include "Vector.h"

template <class T>
Vector<T>::Vector() {

    count = 0;
    list  = new T*[30];

}

template <class T>
bool Compare(T x, T y) {
    if (x > y)
        return 1;
    else
        return 0;
}
template <class T>
void Vector<T>::Push(const T& t) {
    if (count <= 30) {
        list[count] = new T;   
        *list[count++] = t;
   }  
}

template <class T>
void Vector<T>::Pop() {
    int temp = *list[count-1];
    count--;
    std::cout << "s-a sters elementul [" << count+1 << "] = " << temp << std::endl;
    delete[] list[count];
}

template <class T>
void Vector<T>::Print() {
    for (int i = 0; i < count; i++)
        std::cout << *list[i] << "=(" << list[i] << ")"<< "; ";
    std::cout << count;
    std::cout << "\n";
}

template <class T>
void Vector<T>::Remove(int index) {
    for (int i = index; i < count - 1; i++)
        list[i] = list[i + 1];
    count--;
   // delete[] list[count];
    //deletes 2 pointers instead of one, not good.
}

template <class T>
void Vector<T>::Insert(const T& t, int index) {
    if (count <= 30) {
        for (int i = count; i > index; i--) {
            list[i] = list[i - 1];
        }
        count++;
        list[index] = new T;
        *list[index] = t; 
    } else {
        std::cout << "nu mai avem spatiu" << std::endl;
    }
    
}

template <class T>
void Vector<T>::Sort(bool (*comp)(T, T)) {

        if (comp == nullptr)
            comp = Compare;
        for (int i = 0; i < count; ++i) {
            int j    = i - 1;
            T* temp = list[i];
            while (j >= 0 && comp(*list[j], *temp) ) {
                list[j + 1] = list[j];
                --j;
            }
            list[j + 1] = temp;
        }
}

template <class T>
const T& Vector<T>::Get(int index) {
    return *list[index];
}

template <class T>
void Vector<T>::Set(int index, T value) {
    *list[index] = value;
}

template <class T>
int Vector<T>::GetCount() {
    return count;
    return 0;
}



