#include <iostream>
#include "../include/CommandLineEngine.hpp"
#include "../include/GraphGenerator.hpp"
#include "../include/Cycle.hpp"
#include <cstring>

using namespace std;
using namespace Command;
using namespace Generator;
using namespace Graph;

int main(int argc, char *argv[])
{
	//Test case:

	/*GraphGenerator *graphGenerator = new GraphGenerator(7, 70);

	//MatrixGraph *matrixGraph = graphGenerator->generateHamiltonian(); 

	MatrixGraph *matrixGraph = graphGenerator->generateHamiltonian();

	matrixGraph->print();

	//Cycle *cycle = matrixGraph->findEulerCycle();

	//cycle->print();

	matrixGraph->findHamiltonianCycle();	

	CommandLineEngine *cmd = new CommandLineEngine(matrixGraph);*/

	if(!argv[1])
	{
		cout<<"Error"<<endl;

		return 0;
	}

	MatrixGraph *matrixGraph;

	if(strcmp(argv[1], "--hamilton") == 0)
	{
		int nodes = 0;
		int saturation = 0;

		cout<<"nodes>";
		cin>>nodes;

		cout<<endl;

		cout<<"saturation>";
		cin>>saturation;

		GraphGenerator *graphGenerator = new GraphGenerator(nodes, saturation);

		matrixGraph = graphGenerator->generateHamiltonian();

	}
	else if(strcmp(argv[1], "--non-hamilton") == 0)
	{
		int nodes = 0;
		int saturation = 50;

		cout<<"nodes>";
		cin>>nodes;

		cout<<endl;

		GraphGenerator *graphGenerator = new GraphGenerator(nodes, saturation);

		matrixGraph = graphGenerator->generateNonHamiltonian();

	}
	else
	{
		cout<<"Error"<<endl;

		return 0;
	}

	CommandLineEngine *cmd = new CommandLineEngine(matrixGraph);

	cmd->start();

	return 0;
}