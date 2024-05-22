#include <iostream>

using namespace std;

namespace Graph
{
    class MatrixGraph
    {
        int** edges;

        int nodes;
        double saturation;

        public:

        MatrixGraph(int nodes, double saturation): nodes(nodes), saturation(saturation)
        {

        }
        virtual ~MatrixGraph() = default;
        MatrixGraph operator=(const MatrixGraph &m);

        void operator()(int o);

        void generateHamilton();
        void generateNonHamilton();

    };

};