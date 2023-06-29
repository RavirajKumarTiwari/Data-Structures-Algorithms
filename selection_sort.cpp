
//DATE:- 10-08-2021
//WAP to shorting in array (selection sort)

#include<iostream>
using namespace std;

int selectionSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                // int temp = arr[j];
                // arr[j] = arr[i];
                // arr[i] = temp;
                swap(arr[j], arr[i]);
            }
            
        }
        
    }
    cout <<"Shorted array is :- ";
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i]<<"    ";
    }
    cout<<endl;
    return 0;
}
int main ()
{
    int n;
    cout <<"Enter the size of the array :- ";
    cin>>n;
    int arr[20];
    cout <<"Enter the elements of the array :-\n";
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    selectionSort(arr, n);
}