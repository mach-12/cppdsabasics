#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        array[i] = i + 69;
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    
    cout << endl;

    
    return 0;
}
