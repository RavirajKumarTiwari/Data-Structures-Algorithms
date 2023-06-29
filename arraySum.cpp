//Question:- Find the sum of array's elements using recursion

#include<iostream>
using namespace std;

int arraySum(int *arr, int size)
{
    //base case
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    //recursive relation
    int sum = arr[0] + arraySum(arr + 1, size - 1);
    //sum = 0th index of array + remaining Part of array
    return sum;
}

int main()
{
    int arr[5];
    int size = 5;

    cout << "Enter the 5 elements of array :\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout <<"Sum of array = 1" << arraySum(arr, size);
}