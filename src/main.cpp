#include <iostream>
#include "../include/GraphGenerator.hpp"

using namespace std;
using namespace Generator;
using namespace Graph;

int main(int argc, char *argv[])
{
	//Test case:

	GraphGenerator *graphGenerator = new GraphGenerator(7, 70);

	MatrixGraph *matrixGraph = graphGenerator->generateHamiltonian(); 

	matrixGraph->print();

	return 0;
}