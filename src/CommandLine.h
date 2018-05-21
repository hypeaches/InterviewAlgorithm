#ifndef COMMANDLINE_H
#define COMMANDLINE_H

class CommandLine
{
public:
    static void Init(int argc, char* argv[]);
    static bool verbose;
};

#endif
