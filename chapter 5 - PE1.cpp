#include <iostream>
using namespace std;

int main() {
    cout << "SUM OF NUMBERS!" << endl;

    int number, sum = 0, resultado = 0;
    cout << "Enter a number so we can find the sum of it: " << endl;
    cin >> number;
    
    if (number > 0) {
        while (sum != number) {
            sum += 1;
            resultado = sum + resultado;
            cout << resultado << endl;
        }} else {
            cout << "The number must be positive.";
        }

    return 0;
}