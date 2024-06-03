#include <iostream>
#include "../include/CommandLineEngine.hpp"
#include "../include/GraphGenerator.hpp"

using namespace std;
using namespace Command;
using namespace Generator;
using namespace Graph;

int main(int argc, char *argv[])
{
	//Test case:

	GraphGenerator *graphGenerator = new GraphGenerator(7, 70);

	MatrixGraph *matrixGraph = graphGenerator->generateHamiltonian(); 

	matrixGraph->print();

	CommandLineEngine *cmd = new CommandLineEngine(matrixGraph);

	return 0;
}