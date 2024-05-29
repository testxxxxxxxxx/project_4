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

    cout<<" |";

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