#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of an array : \n";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int left = 0,mid = 0, right = size-1;

    while(mid <= right)
    {
        if(arr[mid] == 0){
            swap(arr[mid], arr[left]);
            mid++;
            left++;
        }
        if(arr[mid] == 1){
            mid++;
        }
        if(arr[mid] == 2){
            swap(arr[mid], arr[right]);
            right--;
        }
    }

    for(int i = 0;i < size; i++){
        cout<<arr[i]<<"\t";
    }

}