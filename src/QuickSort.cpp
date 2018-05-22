#include "QuickSort.h"

void DoQuickSort(int* src, int l, int r)
{
    if (l >= r) return;

    int i = l;
    int j = r;
    int tmp = src[i];

    while (i < j)
    {
        while (i < j && src[j] > tmp)
            j--;
        if (i < j)
            src[i++] = src[j];

        while (i < j && src[i] < tmp)
            ++i;
        if (i < j)
            src[j--] = src[i];
    }

    src[i] = tmp;
    DoQuickSort(src, l, i - 1);
    DoQuickSort(src, i + 1, r);
}

void QuickSort::Sort(std::vector<int>& src)
{
    if (src.size() > 1)
    {
        DoQuickSort(src.data(), 0, src.size() - 1);
    }
    Output(src);
}
