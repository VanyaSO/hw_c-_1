#include <iostream>
using namespace std;

// Написати програму, яка перетворює введене з клавіатури дробове число в грошовий формат.
// Наприклад, число 12,5 має бути перетворено до вигляду 12 грн. 50 коп.

int main () {
    double number;
    cout << "Enter number: " << endl;
    cin >> number;

    int integerPart = int(number);
    double fractionalPart = (number - integerPart) * 100;

    cout << integerPart << " грн. " << fractionalPart << " коп.";


    return 0;
}

