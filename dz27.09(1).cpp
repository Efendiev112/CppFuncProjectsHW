﻿
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");


	int a, b, c;
	cout << "Введите целое шестизначне число: ";
	cin >> a;

	b = (a / 100000)+(a / 10000 % 10)+(a / 1000 % 10);
	c = (a / 100 % 10)+(a / 10 % 10)+(a % 10);
	if (99999 > a or 999999 < a){
		cout << "Это не шестизначное число";
	}


	else if (b == c) {
		cout << "Счастливое число";
	}


	else {
		cout << "Число не счастливое";
	}
}