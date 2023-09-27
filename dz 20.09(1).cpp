#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	float p = 3.14;
	float Rad;
	cout << "введите радиус круга: ";
	cin >> Rad;


	cout << "Площадь круга =  " << p * (Rad * Rad) << "\n\n";
	cout << "Длина окружности =  " << 2 * p * Rad << "\n\n";
	cout << "Диаметр =  " << Rad * 2 << "\n";
}
