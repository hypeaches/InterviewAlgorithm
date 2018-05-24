#include "CompareSort.h"

void CompareSort::Sort(std::vector<int>& src)
{
    for (size_t i = 0; i < src.size(); ++i)
    {
        for (size_t j = i + 1; j < src.size(); ++j)
        {
            if (src[i] > src[j])
            {
                std::swap(src[i], src[j]);
                Output(src);
            }
        }
    }
}
