#include <iostream>
#include "../include/CommandLineEngine.hpp"
#include <fstream>
#include <chrono>

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
    string path = "./benchmark/benchmark_results/";
    string name = "results.csv";
    string dir = path + name;

    fstream file;

    file.open(dir, ios::out | ios::app);

    while(true)
    {
        cout<<"action>";
        cin>>command;

        auto start = chrono::high_resolution_clock::now();

        this->execute(command);

        auto stop = chrono::high_resolution_clock::now();

        auto time = chrono::duration_cast<chrono::milliseconds>(stop - start);

        file<<to_string(matrixGraph->nodes) + ","<<command+","<<to_string(time.count())<<endl;

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