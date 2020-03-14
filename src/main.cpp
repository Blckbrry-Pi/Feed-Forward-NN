#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main() {
    string j;
    string k;
    string l;
    string m;
    
    std::ifstream params("../Settings:Storage/Parameters.txt");
    std::ofstream rawData("../Settings:Storage/Training Dump.neuraw");
    
    for (int i = 0; i < 8; i++) {
		switch (i) {
			case 1:
                		getline(params, j);
				break;
			case 3:
                		getline(params, k);
				break;
			case 5:
                		getline(params, l);
				break;
			case 7:
                		getline(params, m);
				break;
		}
	}
    
	cout << "Hello, world!" << endl;
	return 0;
}
