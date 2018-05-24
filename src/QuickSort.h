#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "SortBase.h"

class QuickSort : public SortBase
{
public:
    virtual void Sort(std::vector<int>& src) override;

private:
    void DoQuickSort(int* src, int l, int r);
};

#endif

