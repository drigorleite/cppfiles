#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
    cout << "Calories Burned" << endl;

    //3.6 calories per minute
    double caloriesMin = 3.6;
    double trackCal = 0;

    for (int minute = 0; minute <=30; minute += 5) {
        trackCal = minute * caloriesMin;

        cout << fixed << setprecision(2) << trackCal << endl;
    }
}