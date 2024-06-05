#include <iostream>
#include "../include/CommandLineEngine.hpp"

using namespace std;
using namespace Command;

CommandLineEngine CommandLineEngine::operator=(const CommandLineEngine &c)
{

    return CommandLineEngine(new MatrixGraph());
}
void CommandLineEngine::start()
{

}