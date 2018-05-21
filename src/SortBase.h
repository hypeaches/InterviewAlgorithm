#ifndef SORTBASE_H
#define SORTBASE_H

#include <vector>

class SortBase
{
public:
    virtual ~SortBase() {}
    virtual void Sort(std::vector<int>& src) = 0;

protected:
    void Output(std::vector<int>& src);
};

#endif
