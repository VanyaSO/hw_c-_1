#include <iostream>
using namespace std;

//Задание 1,3 сделал на паре и отправил

//Задание 2
//За заданою довжиною кола знайти площу кола за формулою S = pi*R2, радіус обчислити з формули довжини кола: L=2*pi *R.
//Примітка: pi = 3.14.

int main () {
    const float PI = 3.14f;

    float s, r, l;

    cout << "Enter radius: " << endl;
    cin >> r;

    s = PI * (float)pow(r, 2);
    cout << "S = " << s << endl;

    l = 2 * PI * r;
    cout << "L = " << l << endl;


    return 0;
}

