#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int array[] = {1, 2, 3, 4, 5};
    int target = 4;

    int del_array[n-1];
    int count = 0;

    cout << "Given:     ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == target)
            continue;

        del_array[count++] = array[i];
        
    }

    cout << "Deleted: ";
    for (int i = 0; i < count; i++)
    {
        cout << del_array[i] << " ";
    }
    cout << endl;

    return 0;
}
