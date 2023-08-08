#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<< "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // Print the array
    cout << "Given Array: ";
    for(auto i : arr){
        cout << i << " ";
    }

    // Insertion Sort
    for(int i = 1; i < size; i++){
        int curr_element = arr[i];
        //find the current position of curr_element
        int j = i - 1;
        while(j >= 0 && arr[j] > curr_element){
            arr[j + 1] = arr[j];
            j--;
        }
        // Insert the curr_element at the correct position
        arr[j + 1] = curr_element;
    }

    // Print the sorted array
    cout << "\nSorted array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}