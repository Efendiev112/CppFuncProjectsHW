#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");


	float m1;
	cout << "Введите зарплату за 1 месяц: ";
	cin >> m1;


	float m2;
	cout << "Введите зарплату за 2 месяц: ";
	cin >> m2;


	float m3;
	cout << "Введите зарплату за 3 месяц: ";
	cin >> m3;

	cout << "Итоговая зарплата за квартал: " << m1 + m2 + m3;


}
