//Date: 05-07-2022
//WAP to sort an array using Bubble sort

#include<iostream>
using namespace std;

int bubbleSort(int n, int arr[])
{
    int counter = 0;
    while(counter < n-1)
    {
        for(int i = 0; i < n-counter-1; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    return arr[n];
}

int main ()
{
    int n;// size of an array
    cout<<"Enter the size of an array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array :\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    arr[n] = bubbleSort(n, arr);//function calling

        cout <<"Shorted array is :- ";//printing final output
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i]<<"   ";
    }
    cout<<endl;

    return 0;
}