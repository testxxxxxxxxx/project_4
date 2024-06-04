#include <iostream>
#include "../include/MatrixGraph.hpp"
#include "../include/Cycle.hpp"

using namespace std;
using namespace Graph;
using namespace GraphCycle;

MatrixGraph MatrixGraph::operator=(const MatrixGraph &m)
{

    return MatrixGraph();
}
void MatrixGraph::operator()(int o)
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
void MatrixGraph::print()
{
    //Print matrix representation of graph

    cout<<"  |";

    for(int i = 0; i < this->nodes; i++)
    {
        cout<<" "<<i;

    }

    cout<<endl;

    for(int i = 0; i < this->nodes; i++)
    {
        cout<<i<<" |";

        for(int j = 0; j < this->nodes; j++)
        {
            cout<<" "<<this->edges[i][j];

        }

        cout<<endl;

    }

}
Cycle* MatrixGraph::findEulerCycle()
{
    //search euler cycle in graph

    Cycle *cycle = new Cycle();

    int currentVertical = 0;
    int startVertical = 0;

    if(!this->isCycle())
        return cycle;

    for(int i = 0; i < this->nodes; i++)
    {
        currentVertical = i;
        startVertical = i;

        for(int j = 0; j < this->nodes; j++)
        {
            for(int x = 0; x < this->nodes; x++)
            {
                if(this->edges[currentVertical][x] == 1 && !cycle->search(x))
                {
                    cycle->add(x);
                    currentVertical = x;
                    break;

                } 

            }

        }

        if(cycle->size() == this->nodes && startVertical == currentVertical)
            return cycle;

        cycle->clear();    
    }

    cycle->clear();

    return cycle;    
}
bool MatrixGraph::isCycle()
{
    //return true if every vertical has even degree

    if(this->nodes == 0)
        return false;

    int degree = 0;

    for(int i = 0; i < this->nodes; i++)
    {
        degree = 0;

        for(int j = 0; j < this->nodes; j++)
        {
            if(this->edges[i][j] == 1)
                degree++;

        }

        if(degree % 2 != 0)
            return false;

    }

    return true;
}