#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int count = 0;
    int a, b;
    cin >> a >> b;
    bool flag;
    for (int i = a; i <= b; i++) {
        flag = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag)count++;
    }
    cout << count;

}