/*Ninja is good at numbers. So today his friend gave him a task that required him to find out numbers made of 2 and 5 only less than a given limit.
Given an integer N, you need to print all numbers less than N which are having digits only 2 or 5 or both.*/

// For more go to Notion

// Time Complexity: O(N * log(N))
#include <vector>
#include <iostream>

using namespace std;

// Function to check if a number is made of digits 2 and/or 5 only
bool isNumberValid(long long num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 2 && digit != 5) {
            return false;
        }
        num /= 10;
    }
    return true;
}

vector<long long> createSequence(long long n) {
    vector<long long> result;
    for (long long i = 1; i <= n; i++) {
        if (isNumberValid(i)) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    long long limit;
    cout << "Enter the limit: ";
    cin >> limit;

    vector<long long> sequence = createSequence(limit);

    cout << "Numbers made of digits 2 and/or 5 less than " << limit << " are: ";
    for (long long num : sequence) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// Optimized Solution
// Time Complexity: O(N)

// #include <vector>
// #include <iostream>
// #include <queue>

// using namespace std;

// vector<long long> createSequence(long long n) {
//     vector<long long> result;
//     queue<long long> q;
    
//     q.push(2);  // Starting with 2
//     q.push(5);  // Starting with 5
    
//     while (!q.empty()) {
//         long long num = q.front();
//         q.pop();
        
//         if (num <= n) {
//             result.push_back(num);
//             q.push(num * 10 + 2);  // Generate next number by appending 2
//             q.push(num * 10 + 5);  // Generate next number by appending 5
//         }
//     }
    
//     return result;
// }

// int main() {
//     long long limit;
//     cout << "Enter the limit: ";
//     cin >> limit;

//     vector<long long> sequence = createSequence(limit);

//     cout << "Numbers made of digits 2 and/or 5 less than " << limit << " are: ";
//     for (long long num : sequence) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }