#include <iostream>

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

    };

};