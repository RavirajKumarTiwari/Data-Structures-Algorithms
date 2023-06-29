#include <iostream>
using namespace std;

void merge(int *array, int start, int end)
{
    int mid = (start + end) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy vlaue
    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = array[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = array[mainArrayIndex++];
    }

    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
            array[mainArrayIndex++] = first[index1++];
        else
        {
            array[mainArrayIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        array[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        array[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *array, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
int mid = (start + end) / 2;

    // sorting the left part of array
    mergeSort(array, start, mid);

    // sorting the roght part of array
    mergeSort(array, mid + 1, end);

    // calling the merge function for merging the array
    merge(array, start, end);
}

int main()
{
    int array[8] = {10, 20, 1, 3, 5, 20, 100, 1000};
    int n = 8;

    mergeSort(array, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;

    cout << "Time Complexity for every case = O(Nlog(N))\n";
    cout << "Space Complexity = O(n)\n";
}
