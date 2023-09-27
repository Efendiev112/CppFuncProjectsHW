#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");


	float q1;
	cout << "Оценка за 1 четверть: ";
	cin >> q1;
	
	float q2;
	cout << "Оценка за 2 четвертьь: ";
	cin >> q2;

	float q3;
	cout << "Оценка за 3 четверть: ";
	cin >> q3;

	float q4;
	cout << "Оцена за 4 четверть: ";
	cin >> q4;

	cout << "Итоговая годовая оценка = " << round((q1 + q2 + q3 + q4) / 4);

}
