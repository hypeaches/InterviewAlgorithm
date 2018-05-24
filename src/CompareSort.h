#ifndef COMPARESORT_H
#define COMPARESORT_H

#include "SortBase.h"

class CompareSort : public SortBase
{
public:
    virtual void Sort(std::vector<int>& src) override;
};

#endif
