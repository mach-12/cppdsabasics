#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {   
        // finding mid element
        int mid = start + (end - start) / 2;
        
        // mid element == target, then found
        if (arr[mid] == target)
            return mid;

        // mid element > target, then shift the end to mid - 1
        else if (arr[mid] > target)
            end = mid - 1;

        // mid element < target, then shift the start to mid + 1
        else 
            start = mid + 1;
    }

    return -1; // If while loop returns nothting, -1 == Nothing found

}

int binarySearchRecursive(int arr[], int target, int start, int end)
{  
    // calculating mid
    int mid = start + (end - start) / 2;
    
    // base case
    if (arr[mid] == target)
        return mid;

    // search right half
    if (arr[mid] < target)
        return binarySearchRecursive(arr, target, mid + 1, end);

    // search left half
    if (arr[mid] > target)
        return binarySearchRecursive(arr, target, start, end - 1);    
        
    return -1;
}

int main ()
{
    // array
    int size = 9;
    int arr[size] = {1, 23, 33, 45, 50, 67, 89, 94, 100};
    int target = 45;

    // storing result of search
    int result = binarySearchRecursive(arr, target, 0, size-1);

    if (result == -1)
        cout << "Target not found in array";
    else
        cout << "Index of target = " << result;
    return 0;
}