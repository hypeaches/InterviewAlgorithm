#include <iostream>
#include "CommandLine.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "QuickSort.h"
#include "CompareSort.h"

void GetData(std::vector<int>& src);

int main(int argc, char* argv[])
{
    int ret = 0;
    try
    {
        CommandLine::Init(argc, argv);

        std::vector<int> src;
        GetData(src);

        //BubbleSort st;
        //SelectionSort st;
        //QuickSort st;
        CompareSort st;
        st.Sort(src);
    }
    catch (const std::exception& err)
    {
        ret = 1;
        std::cerr<<"error: "<<err.what()<<std::endl;
    }
    return ret;
}

void GetData(std::vector<int>& src)
{
    int num = 0;
    while (std::cin>>num)
    {
        src.push_back(num);
    }
}
