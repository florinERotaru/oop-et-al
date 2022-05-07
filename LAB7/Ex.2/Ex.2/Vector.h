#pragma once
template <class T>
class Vector {
  public:
    T** list;
    int count;

  public:
    Vector();
    void Push( const T &t);
};
