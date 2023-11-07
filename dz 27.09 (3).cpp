
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a, b, c, d, e, f, g;

    cout << "Введите семь целых чисел: ";
    cin >> a >> b >> c >> d >> e >> f >> g;

    if (a >= b && a >= c && a >= d && a >= e && a >= d && a >= g) {
        cout << "Наибольшая цифра : " << a;
    }

    else if (b >= a && b >= c && b >= d && b >= e && b >= f && b >= g) {
        cout << "Наибольшая цифра : " << b;
    }

    else if (c >= a && c >= b && c >= d && c >= e && c >= f && c >= g) {
        cout << "Наибольшая цифра : " << c;
    }

    else if (d >= a && d >= b && d >= c && d >= e && d >= f && d >= g) {
        cout << "Наибольшая цифра : " << d;
    }

    else if (e >= a && e >= b && e >= c && e >= d && e >= f && e >= g) {
        cout << "Наибольшая цифра : " << e;
    }

    else if (f >= a && f >= b && f >= c && f >= e && f >= d && f >= g) {
        cout << "Наибольшая цифра : " << f;
    }

    else if (g >= a && g >= b && g >= c && g >= e && g >= f && g >= d) {
        cout << "Наибольшая цифра : " << g;
    }
    
}


