#ifndef MATRIX_GRAPH

#define MATRIX_GRAPH 1

#include <iostream>

#pragma once

using namespace std;

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

            void operator()(int o);

            void print();

    };

};

#endif