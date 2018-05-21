#include <CommandLine.h>
#include <cstring>
#include <stdexcept>
#include <iostream>
bool CommandLine::verbose = false;

void CommandLine::Init(int argc, char* argv[])
{
    if (argc == 2)
    {
        if (strcmp(argv[1], "-v") == 0)
        {
            CommandLine::verbose = true;
        }
    }
    else if (argc > 2)
    {
        throw std::invalid_argument("invalid argument");
    }
}
