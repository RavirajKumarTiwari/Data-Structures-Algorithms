#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";

    cout << "\n";
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
}

int main()
{
    int n;
    cout << "Enter the size of an array :    ";
    cin >> n;

    int even[n];
    cout << "Enter the elements of an array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> even[i];
    }

    swapAlternate(even, n);
    printArray(even, n);
}