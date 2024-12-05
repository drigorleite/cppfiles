//u gotta study more. Here is where you're kind lost.
#include <iostream>
using namespace std;

int main() {
    for (int asciiCode = 0; asciiCode <= 10; asciiCode++) {
        cout << static_cast<char>(asciiCode); 

        if ((asciiCode + 1) % 16 == 0) {
            cout << endl;
        }
    }
}