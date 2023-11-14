
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


