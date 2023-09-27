
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a, b, c, d, e, f, g;

    cout << "Введите семь целых чисел: ";
    cin >> a >> b >> c >> d >> e >> f >> g;

    if (a >= b and a >= c and a >= d and a >= e and a >= d and a >= g) {
        cout << "Наибольшая цифра : " << a;
    }

    else if (b >= a and b >= c and b >= d and b >= e and b >= f and b >= g) {
        cout << "Наибольшая цифра : " << b;
    }

    else if (c >= a and c >= b and c >= d and c >= e and c >= f and c >= g) {
        cout << "Наибольшая цифра : " << c;
    }

    else if (d >= a and d >= b and d >= c and d >= e and d >= f and d >= g) {
        cout << "Наибольшая цифра : " << d;
    }

    else if (e >= a and e >= b and e >= c and e >= d and e >= f and e >= g) {
        cout << "Наибольшая цифра : " << e;
    }

    else if (f >= a and f >= b and f >= c and f >= e and f >= d and f >= g) {
        cout << "Наибольшая цифра : " << f;
    }

    else if (g >= a and g >= b and g >= c and g >= e and g >= f and g >= d) {
        cout << "Наибольшая цифра : " << g;
    }
    
}


