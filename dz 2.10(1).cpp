#include "iostream"
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	char a;
	cout << "Введите символ ";
	cin >> a;
	
	if (a <= 122 && a >= 97) {
		cout << a << " - Это английская буква\n";
	}

	else if (a <= 57 && a >= 48) {
		cout <<  a << " - Это цифра\n";
	}

	else if (a == 41 || a == 40 || a == 60 || a == 62 || a == 93 || a == 91 || a == 123 || a == 125) {
		cout <<  a << "- Это скобка\n";
	}

	else if (a == 33 || a == 133 || a == 46 || a == 44 || a == 59 || a == 180) {
		cout <<  a << " - Это знак препинания\n";
	}
}
