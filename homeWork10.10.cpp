// #include <iostream>
//int main() /*1.1- пользователь вводит число вывести это число умноженое на 2*/
//{
//    setlocale(LC_ALL, "");
//    using namespace std;
//    int a;
//    cout << "Введите число: ";
//    cin >> a;
//    cout << a * 2;
//
//
//
//
//}

//int main() 1.2 - пользователь вводит число вывести это число в квадрате
//{
//    setlocale(LC_ALL, "");
//    using namespace std;
//    int a;
//    cout << "введите число: ";
//    cin >> a;
//    cout << a * a;
//}

//int main() 1.3 - пользователь вводит 2 числа вывести их сумму
//{
//    setlocale(LC_ALL, "");
//    using namespace std;
//    int a,b;
//    cout << "введите два числа: ";
//    cin >> a >> b;
//    cout << a + b;
//}

//2.1 программа перводит метры в сантиметры
//int main() 
//{
//    setlocale(LC_ALL, "");
//    using namespace std;
//    int a;
//    cout << "Введите длину в метрах: ";
//    cin >> a;
//    cout << a*100<<" Сантиметров";
//}

//2.2 - Пользователь вводит сторону квадрата, найти его площадь
//int main()
//{
//    setlocale(LC_ALL, "");
//    using namespace std;
//    int a;
//    cout << "Введите сторону квадрата: ";
//    cin >> a;
//    cout << "Площадь квадрата = "<<a*a;
//}

//2.3 - пользователь вводит 2 стороны прямоугольника, найти его площадь
//int main()
//{
//    setlocale(LC_ALL, "");
//    using namespace std;
//    int a, b;
//    cout << "Введите первую сторону прямоугольника: ";
//    cin >> a;
//    cout << "Введите вторую сторону прямоугоьника: " ;
//    cin >> b;
//    cout << "Площадь прямоуголька = " << a * b;
//}

//3.1 - определить чётное число или нет
//int main() 
//{
//    setlocale(LC_ALL, "");
//    using namespace std;
//    int a;
//    cout << "введите число: ";
//    cin >> a;
//    if (a % 2 == 0) cout << "Это чётное число ";
//    else
//        cout << "Это не чётное число";
//}

//3.2 - определить положительное число или отрицательное
//int main() 
//{
//    setlocale(LC_ALL, "");
//    using namespace std;
//    int a;
//    cout << "введите число: ";
//    cin >> a;
//    if (a >0) cout << "Это положительное число ";
//    else
//        cout << "Это отрицательное число";
//    
//}

//3.3 - проверить равны ли числа или нет
//int main() 
//{
//    setlocale(LC_ALL, "");
//    using namespace std;
//    int a, b;
//    cout << "введите 2 числа: ";
//    cin >> a >> b;
//    if (a == b) cout << "Числа равные ";
//    else
//    cout << "Числа не равны";
//}

//4.1 - пользователь вводит 2 числа, проверить какое число больше
//int main() 
//{
//    setlocale(LC_ALL, "");
//    using namespace std;
//    int a,b;
//    cout << "введите 2 числа: ";
//    cin >> a >> b;
//    if (a > b) cout << "Первое число больше ";
//    else if (a < b) cout << "Второе больше: ";
//    else (a == b);
//        cout << "Числа равны";
//
//}

//4.2 - пользователь вводит 3 числа, вывести наибольшее 
//int main()
//{
//    setlocale(LC_ALL, "");
//    using namespace std;
//    int a, b, c;
//    cout << "введите 3 числа: ";
//    cin >> a >> b >> c;
//    if (a > b && a > c) cout << "Число " << a << " Больше";
//    else if (b > a && b > c) cout << "Число " << b << " Больше";
//    else if (c > a && c > b) cout << "Число " << c << " Больше";
//    else 
//        cout << "Числа равны";
//}

//4.3 - пользователь вводит текущее время, программа пишет какое время суток на данный момент
//#include <iostream>
//using namespace std;
//int main() 
//{
//    setlocale(LC_ALL, "");
//    int hours, min;
//    cout << "Введите текущее время (часы и минуты): ";
//    cin >> hours >> min;
//
//    if (hours >= 0 && hours < 6)
//        cout << "Ночь";
//
//    else if (hours >= 6 && hours < 12)
//        cout << "Утро";
//
//    else if (hours >= 12 && hours < 18)
//        cout << "День";
//
//    else
//        cout << "Вечер";
//}

//5.2 - программа определяет кратно ли число 2 
//#include <iostream>
//using namespace std;
//int main()
//{
//    setlocale(LC_ALL, "");
//    int a;
//    cout << "Введите число: ";
//    cin >> a;
//    cout<<((a % 2 ==0 ) ? "Кратно" : "Не кратно");
//    
//}

//5.2 - программа определяет число или цифру
//#include <iostream>
//using namespace std;
//int main()
//{
//    setlocale(LC_ALL, "");
//    int a;
//    cout << "Введите цифру или число: ";
//    cin >> a;
//    cout << ((a >= 9) ? "число" : "цифра");
//
//}

// #include <iostream>
// using namespace std;
// int main()
// {
//     setlocale(LC_ALL, "");
//     int a,b;
//     cout << "Введите число: ";
//     cin >> a>>b;
//     cout << ((a*b % 10 == 1) ? "yes" : "no");

// }

//6.1 - простейший калькулятор
//#include <iostream>
//using namespace std;
//int main() 
//{
//    setlocale(LC_ALL, "");
//    int a,b;
//    char c;
//    cout << "2 числа: ";
//    cin >> a>>b;
//    cout << "Введите действие: ";
//    cin >> c;
//    switch (c) {
//
//    case '+': {
//        cout << a + b;
//        break;
//    }
//
//
//    case '-': {
//        cout << a - b;
//        break;
//    }
//
//    case '*': {
//        cout << a * b;
//        break;
//    }
//
//    case '/': {
//        cout << a / b;
//        break;
//    }
//
//
//
//
//    }
//    
//}

//6.2 - пользователь вводит оценку программа выводит соответсвующий текстовый комментарий
//#include <iostream>
//using namespace std;
//int main()
//{
//    setlocale(LC_ALL, "");
//    int a;
//    cout << "Введите оценку (от 1 до 5): ";
//    cin >> a;
//    
//    switch (a) {
//
//    case 1: {
//        cout << "Плохо";
//        break;
//    }
//
//    case 2: {
//        cout << "Неудовлетворительно";
//        break;
//    }
//
//    case 3: {
//        cout << "Удовлетворительно";
//        break;
//    }
//
//    case 4: {
//        cout << "Хорошо";
//        break;
//    }
//    case 5: {
//        cout << "Отлично";
//        break;
//    }
//
//    }
//}

//6.3 - Пользователь вводит оценку, программа выводит оценку в текстовом формате
//#include <iostream>
//using namespace std;
//int main()
//{
//    setlocale(LC_ALL, "");
//    int a;
//    cout << "Введите оценку (от 1 до 5): ";
//    cin >> a;
//    
//    switch (a) {
//
//    case 1: {
//        cout << "Плохо";
//        break;
//    }
//
//    case 2: {
//        cout << "Неудовлетворительно";
//        break;
//    }
//
//    case 3: {
//        cout << "Удовлетворительно";
//        break;
//    }
//
//    case 4: {
//        cout << "Хорошо";
//        break;
//    }
//    case 5: {
//        cout << "Отлично";
//        break;
//    }
//
//    }
//}




