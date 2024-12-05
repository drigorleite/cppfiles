#include <iostream>
using namespace std;

int main() {
    cout << "ROMAN NUMERAL CONVERTER" << endl;

    int number;
    cout << "Enter a number between 1 and 10: " << endl;
    cin >> number;

    switch (number)
    {
        case 1: 
            cout << "The number one is I";
            break;
        case 2:
            cout << "The number two is II";
            break;
        case 3:
            cout << "The number three is III";
            break;
        case 4:
            cout << "The number four is IV";
            break;
        case 5:
            cout << "The number five is V";
            break;
        case 6:
            cout << "The number six is VI";
            break;
        case 7:
            cout << "The number seven is VII";
            break;
        case 8: 
            cout << "The number eight is VIII";
            break;
        case 9:
            cout << "The number nine is IX";
            break;
        case 10:
            cout << "The number ten is X";
            break;
    default:
        cout << "Please, enter a number between 1 and 10";
        break;
    }

    return 0;
}