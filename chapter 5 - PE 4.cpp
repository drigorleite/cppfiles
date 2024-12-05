#include <iostream>
using namespace std;

int main() {
    cout << "Membership Fees Increase" << endl;

    double membershipFee = 2500;
    double increaseFee = 0.04;

    for (int year = 0; year <= 6; year++) {
        double updatedFee = membershipFee * (1 + increaseFee);

        cout << updatedFee << endl;
    }

}