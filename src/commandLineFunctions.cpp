#include <iostream>
#include "../include/CommandLineEngine.hpp"

using namespace std;
using namespace Command;
using namespace Graph;
using namespace GraphCycle;

CommandLineEngine CommandLineEngine::operator=(const CommandLineEngine &c)
{

    return CommandLineEngine(new MatrixGraph());
}
void CommandLineEngine::start()
{
    string command;

    while(true)
    {
        cout<<"action>";
        cin>>command;

        this->execute(command);

    }
}
void CommandLineEngine::execute(string command)
{
    if(command == "Exit")
        exit(0);
    else if(command == "Print")
    {
        matrixGraph->print();
        return;
    }
    else if(command == "EulerCycle")
    {
        Cycle *eulerCycle = matrixGraph->findEulerCycle();

        if(eulerCycle->size() == 0)
        {
            cout<<"Euler cycle has not been found!"<<endl;
            return;
        }
        else
        {
            cout<<"Euler cycle: ";
            eulerCycle->print();
            return;
        }

    }
    else if(command == "HamiltonianCycle")
    {
        matrixGraph->findHamiltonianCycle();
        return;
    }
    else
    {
        cout<<"Command error"<<endl;
        return;
    }

}