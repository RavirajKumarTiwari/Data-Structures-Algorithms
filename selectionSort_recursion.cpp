
// DATE:- 11-12-2022
// WAP to shorting in array (selection sort)

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i = 0;
    int minIndex = i;
    // base case
    if (n == 0 || n == 1)
    {
        return ;
    }

    // 1st case
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[minIndex])
            minIndex = j;
    }
    swap(arr[minIndex], arr[i]);

    // recursive call
    selectionSort(arr, n - 1);


    // print the output
    cout << "Shorted array is :- ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "    ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;
    int arr[20];
    cout << "Enter the elements of the array :-\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr, n);
}