#include <iostream>
int main()
{
	//	setlocale(LC_ALL, "");
	//	using namespace std;
	//	srand(time(NULL));
	//	const int size=10;
	//    const int size2 = 5;
	//    
	//    int a, b, c;
	//    int array[size];
	//    int array2[size2];
	//    int array3[size];
	//    
	//
	//    for (int i = 0; i < 10; i++) {
	//        array[i] = 1+ rand() % 10;
	//        cout << array[i]<<" ";
	//    }
	//    cout << endl;
	//    for (int j = 0; j < 5; j++) {
	//        array2[j] = array[j];
	//        cout << array2[j]<<" ";
	//      
	//    }
	//    cout << endl;
	//    for (int h = 5; h < 10; h++) {
	//        array3[h] = array[h];
	//        cout << array3[h] << " ";
	//    }
	//    
	//    
	//}


//
//	using namespace std;
//	setlocale (LC_ALL,"");
//	srand(time(NULL));
//	int const size(10);
//	int array[size];
//	int array2[size];
//	int array3[size];
// 
//	for (int i = 0; i < 10; i++) {
//		array[i] = 1 + rand() % 10;
//		cout << array[i]<<" ";
//	}
//	cout << endl;
//	for (int j = 0; j < 10; j++) {
//		array2[j] = 1 + rand() % 10;
//		cout << array2[j] << " ";
//	}
//	cout << endl;
//	for (int h = 0; h < 10; h++) {
//		array3[h] =+ array[h] + array2[h];
//		cout << array3[h] << " ";
//	}
//
//
//
//}





	using namespace std;
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int array[7];
	int stoplus=0, summa=0;
	for ( int i = 0; i < 7; i++)
	{
		cout << "Сколько вы потратили в день "<<i+1<<" ";
		cin >> array[i];
		summa += array[i];
		
	}
	if (summa > 100) stoplus++;
	cout << endl;
	cout << "кол-во дней в которых вы потратили больше 100 " << stoplus << endl;
	cout << "Средняя трата в день: " << summa / 7 << endl;

	cout << "Всего потрачено: " << summa;
	
	


}