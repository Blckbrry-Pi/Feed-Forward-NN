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
            case 10:
                        getline(params, m);
                break;
		}
        
        
	}
    
	cout << "Hello, world!" << endl;
	return 0;
}
