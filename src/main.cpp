#include <iostream>
#include "../include/CommandLineEngine.hpp"
#include "../include/GraphGenerator.hpp"
#include "../include/Cycle.hpp"

using namespace std;
using namespace Command;
using namespace Generator;
using namespace Graph;

int main(int argc, char *argv[])
{
	//Test case:

	GraphGenerator *graphGenerator = new GraphGenerator(7, 50);

	//MatrixGraph *matrixGraph = graphGenerator->generateHamiltonian(); 

	MatrixGraph *matrixGraph = graphGenerator->generateNonHamiltonian();

	matrixGraph->print();

	Cycle *cycle = matrixGraph->findEulerCycle();

	cycle->print();	

	CommandLineEngine *cmd = new CommandLineEngine(matrixGraph);

	return 0;
}