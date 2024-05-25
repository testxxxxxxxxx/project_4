#include <iostream>
#include "../include/GraphGenerator.hpp"

using namespace std;
using namespace Generator;
using namespace Graph;

GraphGenerator GraphGenerator::operator=(const GraphGenerator &g)
{

    return GraphGenerator(this->nodes, this->saturation);
}
void GraphGenerator::operator()(int o)
{
    int a = 5;
    int b = 4;

    auto f=[&a, &b](int *te) -> int
    {
        *te = 5;
        te++;

        return *te;
    };

}
MatrixGraph* GraphGenerator::generateHamilton()
{

}
MatrixGraph* GraphGenerator::generateNonHamilton()
{
    
}