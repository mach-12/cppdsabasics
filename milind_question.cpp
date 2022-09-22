# include <iostream>
# define SIZE 100

using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void calculatePattern(int* &arr, int N)
{
    int count = 0;
    for (int i = 1; i <= N; i +=2)
        arr[count++] = i;

    if (N % 2 != 0)
        N--;

    for (int i = N; i >= 2; i -= 2)
        arr[count++] = i;
}

int main()
{
    int result[100];
    int N;

    cout << "Input: ";
    cin >> N;

    calculatePattern(&result, N);

    printArray(result, N);
}