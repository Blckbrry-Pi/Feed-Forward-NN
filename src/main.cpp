#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::getline;

class layer {
	private:
		long newrons;
		double neurons[];
	public:
		layer() {
			newrons = 100;
			neurons = {0, 1, 2};
		}
};

int main() {
    string j;
    string k;
    string l;
    string m;
    string n;
    std::ifstream params("../Settings:Storage/Parameters.txt");
    std::ofstream rawData("../Settings:Storage/Training Dump.neuraw");
    
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
    
    std::vector<layer> yay;
    for (int i = 0; i < yay.size(); i++) {
	cout << yay.at(i) << endl;
    }
    return 0;
}
