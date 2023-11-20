
#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "");
	srand(time(NULL));

	const int size = 20;
	int array[size];
	int min = 20;
	int	max = 0;
    
	for (int i = 0; i < 20; i++) {
		int a = 1 + rand() % 20;
		array[i] = a;
		if (min > a) min = a;
		if (max < a) max = a;
		cout << array[i] << " ";
	}
	cout<<"\n"<<"Минимальное " << min<<" Максимальное " << max;
}





int main()
{   
	setlocale(LC_ALL, "");
	using namespace std;
	srand(time(NULL));
	const int size=10;
    int a, b, c;
    int array[size];
    cout << "Введите диапазон: ";
    cin >> a >> b;

    for (int i = 0; i < 10; i++) {
        array[i] = a + rand() % (b + 1 - a);
        cout << array[i]<<" ";
    }
    cout << endl;

    int summ = 0;
    cout << "Введите число: ";
    cin >> c;
    for (int i = 0; i < 10; i++) {
        if (array[i] < c) summ += array[i];
    }

    cout << "Сумма чисел,которые меньше введённого " << summ;
}
