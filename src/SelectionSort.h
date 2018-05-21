#ifndef SELECTIONSORT_h
#define SELECTIONSORT_h

#include "SortBase.h"

class SelectionSort : public SortBase
{
public:
    virtual void Sort(std::vector<int>& src) override;
};

#endif
