#include "SelectionSort.h"
#include "CommandLine.h"

void SelectionSort::Sort(std::vector<int>& src)
{
    for (size_t i = 0; i < src.size(); ++i)
    {
        int min_index = i;
        for (size_t j = i + 1; j < src.size(); ++j)
        {
            if (src[min_index] > src[j])
            {
                min_index = j;
            }
        }
        std::swap(src[i], src[min_index]);
        Output(src);
    }
}
