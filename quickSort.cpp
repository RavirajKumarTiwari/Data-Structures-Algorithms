#include <iostream>
using namespace std;

int partition(int *arr, int start, int end)
{
    int pivot = arr[start];

    int count = 0;
    for(int i = start+1; i <= end; i++){
        if(arr[i] <= pivot)
            count++;
    }
    // index pivot at right position
    int pivotIndex = start+count;
    swap(arr[pivotIndex], arr[start]);

    //check that left part of array element is less then the pivot and right part of the array element is grater then the pivot element
    int i = start, j = end;

    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] <= pivot){
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int start, int end)
{
    //Base case
    if (start >= end)
        return;

    // Partition
    int p = partition(arr, start, end);

    // Recursive call

    // Sort the left part of array
    quickSort(arr, start, p-1);

    // Sort the right part of the array
    quickSort(arr, p+1, end);
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