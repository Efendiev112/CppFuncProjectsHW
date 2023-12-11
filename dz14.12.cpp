

#include <iostream>

int main()
{   
	setlocale(LC_ALL, "");
	using namespace std;
	srand(time(NULL));

    int const a = 4, b = 5;
    int max = 99, min = 10;

    int array[a][b], summa = 0, cordinatmax_x, cordinatmax_y, cordinatmin_x, cordinatmin_y, max_stroka = min * b;
     int cordinatmax_stroka, min_stroka = max * b, cordinatmin_stroka,
        max_stolb = min * b, min_stolb = max * b, cordinatmax_stolb, cordinatmin_stolb;
    int max_znach = min, min_znach = max;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {

            array[i][j] = min + rand() % (max + 1 - min);

            if (max_znach < array[i][j]) {
                max_znach = array[i][j];
                cordinatmax_x = j;
                cordinatmax_y = i;
            }

            if (min_znach > array[i][j]) {
                min_znach = array[i][j];
                cordinatmin_x = j;
                cordinatmin_y = i;
            }
        }
    }
    for (int sum = 0, i = 0; i < a; i++, sum = 0) {
        for (int j = 0; j < b; j++) {
            cout << array[i][j] << "\t";
            sum += array[i][j];
        }
        summa += sum;
        cout << "| " << sum << endl;

        if (max_stroka < sum) {
            max_stroka = sum;
            cordinatmax_stroka = i;
        }
        if (min_stroka > sum) {
            min_stroka = sum;
            cordinatmin_stroka = i;
        }
    }


    for (int j = 0; j < b; j++) cout << "---------";
    cout << "\n";


    for (int sum = 0, i = 0; i < b; i++, sum = 0) {
        for (int j = 0; j < a; j++) {
            sum += array[j][i];
        }
        cout << sum << "\t";
        if (max_stolb < sum) {
            max_stolb = sum;
            cordinatmax_stolb = i;
        }
        if (min_stolb > sum) {
            min_stolb = sum;
            cordinatmin_stolb = i;
        }
    }
    cout << "  " << summa;






    cout << endl;
    cout << "\nНаибольший элемент: " << max_znach << " (" << cordinatmax_x << ":" << cordinatmax_y << ")" << endl;
    cout << "Наименьший элемент: " << min_znach << " (" << cordinatmin_x << ":" << cordinatmin_y << ")" << endl;
    cout << "Наибольшая сумма в строках: " << max_stroka << " (" << cordinatmax_stroka << ")" << endl;
    cout << "Наименьшая сумма в строках: " << min_stroka << " (" << cordinatmin_stroka << ")" << endl;
    cout << "Наибольшая сумма в столбцах: " << max_stolb << " (" << cordinatmax_stolb << ")" << endl;
    cout << "Наименьшая сумма в столбцах: " << min_stolb << " (" << cordinatmin_stolb << ")" << endl;
}

