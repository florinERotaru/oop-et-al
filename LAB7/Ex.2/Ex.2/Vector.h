#pragma once
template <class T>
class Vector {

    T** list;
    int count;

  public:
    Vector();
    void Push(const T& t);
    void Pop();
    void Print();
    void Remove(int index);
    void Insert(const T& t, int index);
    void Sort(bool (*comp)(T, T));
    const T& Get(int index);
    void Set(int index, T value);
    int GetCount();
    int FirstIndex(T obj, bool (*equal)(T,T));
};
