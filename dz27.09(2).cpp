﻿
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "");

    int a, b, c, d, e;
    cout << "Введите четырёхзначное число: ";
    cin >> a;

    b = a/1000;

    c = a/100%10;

    d = a/10%10;

    e = a%10;


    if (a < 999 or a > 9999) {
        cout << "Ошибка, вы ввели не четырёхзначное число";
    }


    else {
        cout << c * 1000 + b * 100 + e * 10 + d;
    }
}