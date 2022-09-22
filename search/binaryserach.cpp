#include <iostream>
using namespace std;

int Search(int arr[], int target, int size)
{
    // 45
    int start = 0;
    int end = size;
    int mid = (end - start) / 2;
    
    while (start < end)
    {
        if (arr[mid] > target)
        {
            end = mid;
            mid = (end - start) / 2;
            continue;
        }

        else if (arr[mid] < target)
        {
            start = mid;
            mid = (end - start) / 2;
            continue;
        }
        
        else
        {
            return arr[mid];
        }
    }

    return -1;

}

int main ()
{
    // given a sorted array
    int size = 9;
    int arr[size] = {1, 23, 33, 45, 50, 67, 89, 94, 100};
    int target = 45;

    int result = Search(arr, target, size);

    if (result == -1)
        cout << "Target not found in array";
    else
        cout << "Imdex of target =" << result;
    return 0;
}