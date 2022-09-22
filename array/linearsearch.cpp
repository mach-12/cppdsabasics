#include <iostream>
using namespace std;

int main()
{
    int n;
    int array[] = {1, 2, 3, 4, 5};
    int target = 5;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == target)
        {
            cout << array[i] << endl;
            cout << "Steps taken: " << i+1;
            break;
        }
    }

    return 0;
}