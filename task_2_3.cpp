#include <iostream>
using namespace std;

//Написати програму, що обчислює, з якою швидкістю бігун пробіг дистанцію

int main () {
    const double METERS_IN_KILOMETER = 1000.0;
    const int SECONDS_IN_MINUTES = 60;
    const int SECONDS_IN_HOURS = 3600;

    double v;
    double distance;
    double time;
    double time_seconds;
    double time_hours;


    cout << "Обчислення швидкості бігу" << endl;

    cout << "Введіть довжину дистанції (метрів): " << endl;
    cin >> distance;

    cout << "Введіть час (хв.сек): " << endl;
    cin >> time;

    time_seconds = (int(time) * SECONDS_IN_MINUTES) + ((time - int(time)) * 100);
    time_hours = time_seconds / SECONDS_IN_HOURS;

    v = (distance / METERS_IN_KILOMETER) / time_hours;

    cout << "Ви бігли зі швидкістю: " << v << " км/год" << endl;



    return 0;
}

