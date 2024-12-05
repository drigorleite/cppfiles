#include <iostream>
using namespace std;

void calculateRetail(double markupPercentage, double wholesaleCost) {
    double retailPrice = wholesaleCost + (wholesaleCost * markupPercentage / 100);
    cout << retailPrice;
}

int main() {
    double markupPercentage;
    double wholesaleCost;

    cout << "Enter the item's wholesale cost: ";
    cin >> wholesaleCost;
    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;

    calculateRetail(markupPercentage, wholesaleCost);


    return 0;
}

