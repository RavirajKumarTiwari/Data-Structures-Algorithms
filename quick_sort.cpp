#include <bits/stdc++.h>
using namespace std;

int findPartiotion(int *array, int start, int end){

    // Find the random pivot element for optimization solution
    // int pivotIndex = start + rand()%(end-start+1);

    int pivot = array[end];
    

    int i = start - 1;

    for(int j = start; j < end; j++){
        if(array[j] < pivot){
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i+1], array[end]);

    // cout<<"Pivot element is: "<<i+1<<endl;
    return i+1;
}

void quickSort(int *array, int start, int end){
    // base case
    if(start >= end){
        return;
    }

    // recursive case
    int partitionIndex = findPartiotion(array, start, end);
    quickSort(array, start, partitionIndex-1);
    quickSort(array, partitionIndex+1, end);

}

int main()
{
    int array[10] = {2, 4, 1, 6, 9, 9, 9, 9, 9, 9};
    int n = 10;

    quickSort(array, 0, n - 1);

    cout << endl;
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;

    cout << "\nQuickSort is not a stable sorting Algo\n";
    cout << "Time Complexity Worse case= )(n^2)\n";
    cout << "Time Complexity Best case= O(nLogn)\n";
    cout << "Time Complexity Avg. case= O(nLogn)\n";
    cout << "Space Complexity = O(n)\n"<< endl;

    return 0;
}