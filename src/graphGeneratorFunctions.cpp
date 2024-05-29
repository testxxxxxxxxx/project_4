#include <iostream>
#include "../include/GraphGenerator.hpp"
#include <random>
#include <math.h>

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
MatrixGraph* GraphGenerator::generateHamiltonian()
{
    MatrixGraph *matrixGraph = new MatrixGraph();

    matrixGraph->nodes = this->nodes;
    matrixGraph->edges = new int*[this->nodes];

    for(int i = 0; i < this->nodes; i++)
    {
        matrixGraph->edges[i] = new int[this->nodes];

    }

    int numberOfEdges = pow(this->nodes, 2) * (saturation / 100);
    int howManyE = 0;
    int x, y;
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0, this->nodes);

    //Generate undirected graph

    for(int i = 0; i < this->nodes; i++)
    {
        for(int j = 0; j < this->nodes; j++)
        {
            x = dist(mt);
            y = dist(mt);

            while(matrixGraph->edges[x][y] == 1 || x == y)
            {
                x = dist(mt);
                y = dist(mt);

            }

            if(howManyE < numberOfEdges)
            {
                matrixGraph->edges[x][y] = 1;
                howManyE++;
            }

        }

    }

    return matrixGraph;
}