#ifndef MATRIX_GRAPH

#define MATRIX_GRAPH 1

#include <iostream>
#include "../include/Cycle.hpp"

#pragma once

using namespace std;
using namespace GraphCycle;

namespace Graph
{
    class MatrixGraph
    {
        public:

            int** edges;
            int nodes;

            MatrixGraph()
            {

            }
            virtual ~MatrixGraph() = default;
            MatrixGraph operator=(const MatrixGraph &m);

            void print();
            Cycle* findEulerCycle();
            bool isCycle();
            bool isSafe(int v, vector<int> &path, int pos);
            bool hamCycleUtil(vector<int> &path, int pos, Cycle *cycle);
            bool findHamiltonianCycle();

    };

};

#endif