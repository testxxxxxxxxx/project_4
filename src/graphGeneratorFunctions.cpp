#include <iostream>
#include "../include/GraphGenerator.hpp"
#include <random>

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
MatrixGraph* GraphGenerator::generateAcyclic()
{
    MatrixGraph *matrixGraph = new MatrixGraph();

    matrixGraph->edges = new int*[this->nodes];

    for(int i = 0; i < this->nodes; i++)
    {
        matrixGraph->edges[i] = new int[this->nodes];

    }

    int numberOfEdges = (this->nodes * (this->nodes - 1 / 2) * (this->saturation / 100));
    int howManyE = 0;

    //Generate acyclic graph

    for(int i = 0; i < this->nodes; i++)
    {
        for(int j = 0; j < this->nodes; j++)
        {
            if(howManyE < numberOfEdges)
            {
                matrixGraph->edges[i][j] = 1;
                howManyE++;
            }

        }

    }

    return matrixGraph;
}
MatrixGraph* GraphGenerator::generateHamilton()
{
    //Generate acyclic graph

    MatrixGraph *MatrixGraph = this->generateAcyclic();

    

}