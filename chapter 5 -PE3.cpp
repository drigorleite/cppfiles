#include <iostream> 
using namespace std;

int main() {
    cout << "Ocean Levels in 25 years" << endl;

    //1.5 millimeters - year
    //number of millimiters that the ocean will have risen each year for the next 25 years
    
    double oceanLevelYear = 1.5;
    double addGrowth = 0;
    for (int year = 0; year <= 25; year++) {
        cout << "Year " << year << ": ";
        addGrowth += oceanLevelYear; //aqui eh onde atualizo o valor. estava esquecendo do += para atualizar a mudanca de cada um.
        cout << addGrowth << endl;
    }

    return 0;
}