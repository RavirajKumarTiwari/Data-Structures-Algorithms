#include<iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;

    while (start < end)
    {
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    // cout<<"mid = " <<mid <<endl;
    // cout<<"end = " <<end <<endl;
    return start;
}

int main()
{
    int arr[5] = {3,8,10,17,1};
    cout<<"Index of Pivot element is :  " << getPivot(arr,5) <<endl;
}
