#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <unistd.h>
#include <cmath>
#include <random>
#include "../Dependencies/time_unit_conversions.h"
using std::cout;
using std::endl;
using std::string;
using std::getline;
using std::vector;



struct neuron {
    neuron() {
        throw std::domain_error("\nThere have to be neurons in the previous layer!\n");
    }
    
    neuron(long int connectionCountIn) {
        //connections = connectionCount;
        connectionCount = connectionCountIn;
        if(connectionCount == 0){
            throw std::domain_error("\nThere can't be 0 neurons in the previous layer!\n");
        }
        initConnections();
    }
    
    long int connectionCount;
    vector<double> connections;
    
private:
    void initConnections(){
        if (connections.empty() == true) {
            for (int i = 0; i < connectionCount; i++) {
                double iterRand = rand();
                connections.push_back(-10 + (long double)rand() / (RAND_MAX / 20.0));
            }
        }
    }
};

struct layer {
    layer(){
        throw std::domain_error("\n*Screaming noises*\n");
    }
    
    layer(long int prevLayerCount) {
        
        if( prevLayerCount <= 0 ){
            throw std::domain_error("\nThere can't be 0 neurons in the previous layer!\n");
        }
        
        
        prevLayerNeuronCount = prevLayerCount;
        neuronCount = 100;
        initNeurons();
    }
    
    
    layer(long int layerCountIn, long int prevLayerCount) {
        
        if( layerCountIn <= 0 ){
            throw std::domain_error("\nA layer cannot contain 0 neurons!\n");
        }
        
        if( prevLayerCount <= 0 ){
            throw std::domain_error("\nThere can't be 0 neurons in the previous layer!\n");
        }
        
        
        prevLayerNeuronCount = prevLayerCount;
        neuronCount = layerCountIn;
        initNeurons();
    }
    
    
    layer(vector<neuron> layerIn, long int prevLayerCount) {
        
        if(layerIn.empty()){
            throw std::domain_error("\nA layer cannot contain 0 neurons!\n");
        }
        
        if( prevLayerCount <= 0 ){
            throw std::domain_error("\nThere can't be 0 neurons in the previous layer!\n");
        }
        
        
        prevLayerNeuronCount = prevLayerCount;
        neuronCount = layerIn.size();
        neurons = layerIn;
        initNeurons();
    }
    
    long int neuronCount;
    vector<neuron> neurons;
    long int prevLayerNeuronCount;
    
    
private:
    void initNeurons() {
        if(neurons.empty()){
            for(int c = 0; c < neuronCount; c++){
                neurons.push_back(neuron(prevLayerNeuronCount));
            }
        } else {
            for (auto c = neurons.begin(); c != neurons.end(); ++c){
                neurons.push_back(neuron(*c));
            }
        }
}
    
};

int main() {
    
    int seed = time(0);
    srand(seed);
    
    string j;
    string k;
    string l;
    string m;
    string n;
    std::ifstream params("../Settings:Storage/Parameters.txt");
    std::ofstream rawData;
    cout << endl;
    rawData.open("../Settings:Storage/Training Dump.neuraw");
    layer layer1(8000, 3000);
    for (int i = 0; i < 15; i++) {
		switch (i) {
			case 1:
                		getline(params, j);
				break;
			case 4:
                		getline(params, k);
				break;
			case 7:
                		getline(params, l);
				break;
			case 10:
                		getline(params, m);
				break;
           		case 14:
                        	getline(params, n);
                		break;
		}
        
        
	}
    
    
    cout << layer1.neurons.at(1).connections.at(1) << endl;
    
    
    usleep(s_to_u(5));
    return 0;
}
