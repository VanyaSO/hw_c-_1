#include <iostream>
using namespace std;

// Написати програму, яка перетворює введену користувачем кількість днів на кількість повних тижнів і днів,
// що залишилися. Наприклад, якщо користувач ввів 17 днів, програма повинна вивести на екран 2 тижні і 3 дні.

int main () {
    const int DAY_IN_WEEK = 7;
    int user_days;

    cout << "Enter days: " << endl;
    cin >> user_days;

    cout << user_days / DAY_IN_WEEK << " week " << user_days % DAY_IN_WEEK << " days";



    return 0;
}

