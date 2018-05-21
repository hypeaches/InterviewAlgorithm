#include "BubbleSort.h"
#include "CommandLine.h"

void BubbleSort::Sort(std::vector<int>& src)
{
    for (size_t i = 0; i < src.size() - 1; ++i)
    {
        for (size_t j = 0; j < src.size() - i - 1; ++j)
        {
            if (src[j] > src[j + 1])
            {
                std::swap(src[j], src[j + 1]);
                Output(src);
            }
        }
    }
}
