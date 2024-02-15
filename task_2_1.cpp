#include <iostream>
using namespace std;

// Користувач вводить із клавіатури час у секундах.
// Необхідно написати програму, яка переведе введені користувачем
// секунди в години, хвилини, секунди і виведе їх на екран.

int main () {
    const int SECONDS = 60, SECONDS_IN_HOUR = 3600;
    int minutes, hours;
    int user_time;

    cout << "Enter time in seconds: " << endl;
    cin >> user_time;

    minutes = user_time / SECONDS;
    hours = user_time / SECONDS_IN_HOUR;

    cout << "Seconds: " << user_time << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Hours: " << hours << endl;

    return 0;
}

