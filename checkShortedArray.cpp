//Question:- Check that the given array is sorted or not using recursion

#include <iostream>
using namespace std;

bool isSorted(int *arr, int size)
{
    //base case
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr + 1, size -1);
        return remainingPart;
    }

}

int main()
{
    int arr[5];
    int size = 5;

    cout<<"Enter the 5 elements of array :\n";
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }

    bool ans = isSorted(arr, size);

    if(ans){
        cout<<"\nArray is sorted\n";
    }
    else{
        cout<<"\nArray is not sorted\n";
    }
}
