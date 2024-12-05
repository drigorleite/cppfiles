#include <iostream>
using namespace std;

int main() {
    int month, day, year;
    cout << "Enter a month, day and a year (two digit format): " << endl;
    cin >> month >> day >> year;

    int magicDate = month * day;
    
    if (magicDate == year) {
        cout << "It's a magic year! " << month <<"/"<< day << "/" << year << endl;
    } else {
        cout << "This date isn't magic.";
    }

    return 0;
}