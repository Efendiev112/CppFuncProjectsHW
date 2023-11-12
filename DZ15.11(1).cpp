
#include <iostream>
#include<ctime>
int main()
{
    using namespace std;
    srand(time(NULL));
    int array[5];
    int min = 0;
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        array[i] = rand();
        cout << array[i] << " ";

        if (i == 0)
        {
            max = array[0];
            min = array[0];
        }

        if (min > array[i])
        {
            min = array[i];
        }

        if (max < array[i])
        {
            max = array[i];
        }


    }
    cout << endl << min << " " << max;
}
