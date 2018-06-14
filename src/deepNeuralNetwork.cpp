#include <iostream>
#include <NN.h>

using namespace std;

int main() {

	NN neuralNetwork;
	neuralNetwork.setNumberOfLayers(5);
	int numberOfLayers;
	numberOfLayers = neuralNetwork.getNumberOfLayers();

	cout << "Neural Network with " << numberOfLayers << " layers" << endl;
	return 0;
}
