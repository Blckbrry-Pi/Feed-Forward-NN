#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <unistd.h>
#include <cmath>
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
    
    neuron(long int prevLayerNeuronCount) {
        connections = prevLayerNeuronCount;
    }
    
    long int connections;
};

struct layer {
    layer(){
        throw std::domain_error("\n*Screaming noises*\n");
    }
    
    layer(long int prevLayerCount) {
        
        if( prevLayerCount == 0 ){
            throw std::domain_error("\nThere can't be 0 neurons in the previous layer!\n");
        }
        
        
        prevLayerNeuronCount = prevLayerCount;
        neuronCount = 100;
        initRandomNeurons();
    }
    
    
    layer(long int x, long int prevLayerCount) {
        
        if( x == 0 ){
            throw std::domain_error("\nA layer cannot contain 0 neurons!\n");
        }
        
        if( prevLayerCount == 0 ){
            throw std::domain_error("\nThere can't be 0 neurons in the previous layer!\n");
        }
        
        
        prevLayerNeuronCount = prevLayerCount;
        neuronCount = x;
        initRandomNeurons();
    }
    
    
    layer(vector<neuron> y, long int prevLayerCount) {
        
        if(y.empty()){
            throw std::domain_error("\nA layer cannot contain 0 neurons!\n");
        }
        
        if( prevLayerCount == 0 ){
            throw std::domain_error("\nThere can't be 0 neurons in the previous layer!\n");
        }
        
        
        prevLayerNeuronCount = prevLayerCount;
        neuronCount = y.size();
        neurons = y;
    }
    
    long int neuronCount;
    vector<neuron> neurons;
    long int prevLayerNeuronCount;
    
    
private:
    void initRandomNeurons() {
        for(int c = 0; c < neuronCount; c++){
            neurons.push_back(neuron(prevLayerNeuronCount));
        }
}
    
};

int main() {
    string j;
    string k;
    string l;
    string m;
    string n;
    std::ifstream params("../Settings:Storage/Parameters.txt");
    std::ofstream rawData;
    cout << endl;
    rawData.open("../Settings:Storage/Training Dump.neuraw");
    layer aaaaaaaaaaa(8000, 8000);
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
    
    cout << aaaaaaaaaaa.neurons.begin() -> connections << endl;
    
    usleep(s_to_u(3));
    return 0;
}
