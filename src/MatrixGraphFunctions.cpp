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