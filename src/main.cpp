#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::getline;
using std::vector;

struct neuron { };

struct layer {
    layer() {
        neuronCount = 100;
        initRandomNeurons(100);
    }
    layer(long int x) {
        neuronCount = x;
        initRandomNeurons(100);
    }
    layer(vector<neuron> y) {
        neuronCount = y.size();
        neurons = y;
    }
    long neuronCount;
    vector<neuron> neurons;
    
private:
    void initRandomNeurons(count)
    {
        
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
    rawData.open("../Settings:Storage/Training Dump.neuraw");
    layer aaaaaaaaaaa(100);
    
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
    
    cout << aaaaaaaaaaa.neurons.size() << endl;
    
    return 0;
}
