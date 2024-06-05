#ifndef COMMAND_LINE_ENGINE

#define COMMAND_LINE_ENGINE 1

#include <iostream>
#include "../include/MatrixGraph.hpp"

#pragma once

using namespace std;
using namespace Graph;

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

            void start();

        private:
        
            void execute(string command);

    };

};

#endif