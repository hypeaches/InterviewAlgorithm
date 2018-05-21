#ifndef BUBBLESORT_h
#define BUBBLESORT_h

#include "SortBase.h"

class BubbleSort : public SortBase
{
public:
    virtual void Sort(std::vector<int>& src) override;
};

#endif
