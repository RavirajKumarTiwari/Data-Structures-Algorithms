//Date : 01-07-2022
//WAP to sort an array using Selection sort and search an element using Binary search
#include<iostream>
using namespace std;

int selectionSort(int n, int arr[])//function for selection sort
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])//comprasion between index i and i+1
            {
                //swaping of elements
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            
        }
        
    }
    return arr[n];
}
int binarySearch(int arr[],int n,int key){//function for Binary search
    int s = 0,e = n-1;// n = size of array 
    while (s <= e)// where s = starting index and e = last index of array
    {
        int mid = (s+e)/2;// finding middle index of an array
        if (arr[mid] == key){
            cout<<"index = ";
            return mid;
            cout<<endl;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else{
            s = mid+1;
        }
        
    }
    cout <<"Not found!\n";
    return -1;
    }
int main ()
{
    int n, key;
    cout <<"Enter the size of the array :- ";
    cin>>n;

    int arr[n];
    cout <<"Enter the elements of the array :-\n";
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    cout<<"Enter the element that find in the array :- ";
    cin>>key;
    
    //function calling
    arr[n] = selectionSort(n, arr);

    cout <<"Shorted array is :- ";
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i]<<"   ";
    }
    cout<<endl;

    cout<<binarySearch(arr, n, key)<<endl;
}