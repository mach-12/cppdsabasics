#include <iostream>
using namespace std;

void printArr(int arr[])
{
    for (int i = 0; i < (int) sizeof(arr) / sizeof(int); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 5;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        array[i] = i;
    }

    printArr(array);

    return 0;
}
