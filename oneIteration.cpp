// Date: 04.07.2023
// CodingNinja Problem of the day

/*
Problem statement : Alice loves to give challenging tasks to Bob. This time, Alice
gave Bob an array 'A' of 'N' distinct integers and asked him to
find the maximum sum Bob can make by taking two elements
from this array. To make this challenging, Alice asked Bob to
find the answer by traversing the array only once.
As always, Bob asked you to help him do the task by traversing
the array only once.
*/

#include <bits/stdc++.h> 
using namespace std;

int oneIteration(vector<int> A) {

    int n = A.size();
    // Get the number of elements in the array.

    // Initialize the variable maxSum to store the maximum sum of two elements in the array.
    int maxSum = INT_MIN;

    int firstMax = INT_MIN;
    // Initialize the variable firstMax to store the largest element in the array.

    int secondMax = INT_MIN;
    // Initialize the variable secondMax to store the second-largest element in the array.

    for (int i = 0; i < n; i++) {
        // Traverse the array to find the two largest elements.

        if (A[i] > firstMax) {
            // If the current element is greater than firstMax, update both firstMax and secondMax.

            secondMax = firstMax;
            // Move the previous firstMax to secondMax.

            firstMax = A[i];
            // Update firstMax to the current element.
        } else if (A[i] > secondMax) {
            // If the current element is not greater than firstMax but greater than secondMax, update secondMax only.

            secondMax = A[i];
            // Update secondMax to the current element.
        }
    }

    maxSum = firstMax + secondMax;
    // Calculate the maximum sum by adding the two largest elements.

    return maxSum;
    // Return the maximum sum of two elements in the array.
}

int main() {
    int t;
    cin >> t;
    // Read the number of test cases.

    while (t--) {
        // Loop through each test case.

        int n;
        cin >> n;
        // Read the number of elements in the array.

        vector<int> A(n);
        // Create a vector to store the elements of the array.

        for (int i = 0; i < n; i++) {
            cin >> A[i];
            // Read the elements of the array.
        }

        int result = oneIteration(A);
        // Call the oneIteration function to find the maximum sum of two elements.

        cout << result << endl;
        // Output the result.
    }

    return 0;
}

