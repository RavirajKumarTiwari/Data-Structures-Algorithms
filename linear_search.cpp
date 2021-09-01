
//DATE:- 10-08-2021
//WAP to linear search

#include<iostream>
using namespace std;
    int linearSearch(int arr[],int n,int key){
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (arr[i] == key)
            {
                /* code */
                cout <<"\nIndex = ";
                return i;
                cout <<endl;
            }
            
        }
        cout <<"not found!";
        return -1;
        
    }
int main ()
{
    int n;
    cout <<"Enter the size of the array :- ";
    cin >>n;
    int arr[n];
    cout<<"Enter the elements of the array :-\n";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >>arr[i];
    }
    cout <<"Enter the element of array that find in the array :- ";
    int key;
    cin >>key;
    cout<<linearSearch(arr,n,key)<<endl;
    return 0;
    
}