//#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int binarySearch(vector <int> arr, int start, int end, int key)
{
    

    //base case 
    if(start > end){
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }

    if(arr[mid] < key){
        return binarySearch(arr, mid+1, end, key);
    }
    else{
        return binarySearch(arr, start, mid-1, key);
    }
    mid = start + (end - start) / 2;
}

int main()
{
    vector <int> arr;
    int size, key;
    int start = 1;

    cout<<"Enter the size of array :- ";
    cin>>size;

    int end = size - 1;

    //taking elements of vector array
    cout<<"Enter the "<<size<<" elements of array :\n";
    for(int i = 0; i < size; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    //sorting the vetor array 
    sort(arr.begin(), arr.end());

    cout<<"Enter the value of key :- ";
    cin>>key;

    cout<<binarySearch(arr, start, end, key);

    return 0;
}