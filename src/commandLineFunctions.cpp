#include <iostream>
#include "../include/CommandLineEngine.hpp"

using namespace std;
using namespace Command;

CommandLineEngine CommandLineEngine::operator=(const CommandLineEngine &c)
{

    return CommandLineEngine(new MatrixGraph());
}
void CommandLineEngine::operator()(int o)
{
    int a = 5;
    int b = 4;

    auto f = [&a, &b](int *te) -> int
    {
        *te = 5;
        te++;

        return *te;
    };

}
void CommandLineEngine::start()
{

}