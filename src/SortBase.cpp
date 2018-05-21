#include "SortBase.h"
#include <iostream>
#include "CommandLine.h"

void SortBase::Output(std::vector<int>& src)
{
    if (!CommandLine::verbose)
    {
        return;
    }
    static int count = 1;
    std::cout<<"\n"<<count++<<":\t";
    for (int num : src)
    {
        std::cout<<num<<"\t";
    }
    std::cout<<"\n";
}
