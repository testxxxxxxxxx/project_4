#ifndef COMMAND_LINE_ENGINE

#define COMMAND_LINE_ENGINE 1

#include <iostream>
#include "../include/GraphGenerator.hpp"

#pragma once

using namespace std;

namespace Command
{
    class CommandLineEngine
    {
        MatrixGraph *matrixGraph;

        public:

            CommandLineEngine(MatrixGraph *matrixGraph): matrixGraph(matrixGraph)
            {

            }
            virtual ~CommandLineEngine() = default;

            CommandLineEngine operator=(const CommandLineEngine &c);

            void operator()(int o);

            void start();

    };

};

#endif