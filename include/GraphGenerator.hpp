#ifndef GRAPH_GENERATOR

#define GRAPH_GENERATOR 1

#include <iostream>
#include "MatrixGraph.hpp"

#pragma once

using namespace std;
using namespace Graph;

namespace Generator
{
    class GraphGenerator
    {
        int nodes;
        double saturation;

        public:

            GraphGenerator(int nodes, double saturation): nodes(nodes), saturation(saturation)
            {


            }
            virtual ~GraphGenerator() = default;

            GraphGenerator operator=(const GraphGenerator &g);

            void operator()(int o);

            MatrixGraph* generateHamiltonian();
            MatrixGraph* generateNonHamiltonian();

    };

};

#endif