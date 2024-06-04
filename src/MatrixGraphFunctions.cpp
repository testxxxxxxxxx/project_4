#include <iostream>
#include "../include/MatrixGraph.hpp"

using namespace std;
using namespace Graph;

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
vector<int> MatrixGraph::findEulerCycle()
{
    //search euler cycle in graph

    vector<int> cycle;
    int currentVertical = 0;

    if(!this->isCycle())
        return cycle;

    for(int i = 0; i < this->nodes; i++)
    {
        for(int j = 0; j < this->nodes; j++)
        {
            for(int x = 0; x < this->nodes; x++)
            {
                if(this->edges[currentVertical][x] == 1 /* && cycle not contain */)
                    cycle.push_back(x); 

            }

        }

    }
        
}
bool MatrixGraph::isCycle()
{
    //return true if every vertical has even degree

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