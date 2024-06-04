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

    while(!matrixGraph->isCycle())
    {

        matrixGraph->nodes = this->nodes;
        matrixGraph->edges = new int*[this->nodes];

        for(int i = 0; i < this->nodes; i++)
        {
            matrixGraph->edges[i] = new int[this->nodes];

        }

        int numberOfEdges = pow(this->nodes, 2) * (saturation / 100);
        int howManyE = this->nodes + 1;
        int x, y;
        random_device rd;
        mt19937 mt(rd());
        uniform_int_distribution<int> dist(0, this->nodes - 1);

        int it = 1;

        //Generate hamilton cycle

        for(int i = 0; i < this->nodes; i++)
        {
            if(i == this->nodes - 1)
                matrixGraph->edges[this->nodes - 1][0] = 1;

            matrixGraph->edges[i][it] = 1;

            it++;

        }

        //Generate undirected graph

        for(int i = 0; i < this->nodes; i++)
        {
            for(int j = 0; j < this->nodes; j++)
            {
                x = dist(mt);
                y = dist(mt);

                while(matrixGraph->edges[x][y] == 1)
                {
                    x = dist(mt);
                    y = dist(mt);

                }

                if(howManyE <= numberOfEdges)
                {
                    matrixGraph->edges[x][y] = 1;
                    howManyE++;
                }

            }

        }

    }

    return matrixGraph;
}
MatrixGraph* GraphGenerator::generateNonHamiltonian()
{
    //Generate hamiltonian graph

    MatrixGraph *matrixGraph = this->generateHamiltonian();

    //Remove last edge

    matrixGraph->edges[matrixGraph->nodes - 1][0] = 0;

    return matrixGraph;
}