#include "Array.h"

template <class T>
 Array<T>::Array() {
    Size = Capacity = 0;
}

template <class T>
Array<T>::~Array() {
    delete[] List;
}

template <class T>
Array<T>::Array(int capacity) {
    List = new T*[capacity];
    for (int i = 0; i < capacity; i++)
        List[i] = new T;
    Size = 0;
    Capacity = capacity;
}

template <class T>
Array<T>::Array(const Array<T>& otherArray) {
    Size = otherArray.Size();
    Capacity = Size;
    List     = new T*[Size];
    for (int i = 0; i < Size; i++) {
        List[i] = new T;
        *List[i] = otherArray[i];
    }
}

template <class T>
T& Array<T>::operator[](int index) {
    //try {
        //if (index<Size)
            return *List[index] 
       // else
            //exceptie
    //}
    // // O: insert return statement here
}

template <class T>
const Array<T>& Array<T>::operator+=(const T& newElem) {
    List[Size] = new T;
    *List[Size] = newElem;
    Size++;
    return (*this);
    // // O: insert return statement here
}

template <class T>
const Array<T>& Array<T>::Insert(int index, const T& newElem) {
    if (index<Capacity) {
        *List[index] = newElem;
        if (index > Size)
            Size++;
        return (*this);
    }


    // // O: insert return statement here
}

template <class T>
const Array<T>& Array<T>::Insert(int index, const Array<T> otherArray) {
    if (index<Capacity) {
        List[index] = new T[otherArray.Size()];
        int i       = 0;
        for (auto element : otherArray) {
            *List[i++] = element;
        }
        if (index > Size)
            Size++;
        return (*this);
    }
}

template <class T>
const Array<T>& Array<T>::Delete(int index) {
    if (index<Size) {
        for (int i = index; i < Size - 1; i++) {
            List[i] = List[i + 1];
        }
        Size--;
        return (*this);     
    }
}

template <class T>
bool Array<T>::operator=(const Array<T>& otherArray) {
    int i = 0;
    for (auto element : otherArray)
        if (*List[i++] != element)
            return false;
    return true;
}

template <class T>
void Array<T>::Sort() {
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 0; i < Size - 1; i++)
            if (*List[i] > *List[i + 1]) {
                T* aux;
                aux         = List[i];
                List[i]     = List[i + 1];
                List[i + 1] = aux;
                sorted      = false;
            }
    }
}

template <class T>
void Array<T>::Sort(int (*compare)(const T&, const T&)) {
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 0; i < Size - 1; i++)
            if (compare(*List[i], *List[i+1]) {
                T* aux;
                aux         = List[i];
                List[i]     = List[i + 1];
                List[i + 1] = aux;
                sorted      = false;
            }
    }
}

template <class T>
void Array<T>::Sort(Compare* comparator) {
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 0; i < Size - 1; i++)
            if (comparator->CompareElements(List[i], List[i+1]) {
                T* aux;
                aux         = List[i];
                List[i]     = List[i + 1];
                List[i + 1] = aux;
                sorted      = false;
            }
    }
    template <class T>
    int Array<T>::BinarySearch(const T& elem) {
        int middle = size / 2;
        int rend   = 0;
        int lend       = size;
        while (rend!=lend) {
            
        }
    }
}


