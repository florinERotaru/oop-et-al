#pragma once
class Sort

{
    // add data members
    int *list;
    int count;
  public:
    Sort(int total, int min, int max);
    Sort();
    Sort(int* vtor, int k);
    Sort(int count, ...);
    Sort(const char* chr);
    // add constuctors

    void InsertSort(bool ascendent);

    void QuickSort(bool ascendent);

    void BubbleSort(bool ascendent);

    void Print() const;

    int GetElementsCount();
    void inverse();
    int GetElementFromIndex(int index);
};