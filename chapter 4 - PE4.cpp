#include <iostream>
using namespace std;

int main() {
    cout << "AREA OF RECTANGLES" << endl;

    double lenght, width, lenght2, width2;
    cout << "Enter the lenght and the width, respectively, of the first rectangle: " << endl;
    cin >> lenght >> width;
    double total = lenght * width;
    cout << "Enter the lenght and the width, respectively, of the second rectangle: " << endl;
    cin >> lenght2 >> width2;
    double total2 = lenght2 * width2;

    if (total > total2) {
        cout << "The first rectangle has a greater area with "<< total << " feets of area." << endl;
    } else {
        cout << "The second rectangle has a greater area with " << total2 << " feets of area." << endl;
    }

    return 0;
}