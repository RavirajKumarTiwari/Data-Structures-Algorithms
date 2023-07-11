// CodingNinja Problem of the day(easy): 12.07.2023

// Problem Statement:
// You have been given three distinct integers 'X', 'Y' and 'Z'. You
// need to find the number with a value in the middle.

#include <bits/stdc++.h> 
using namespace std;

int main(){
    int a=0, b=0, c=0;

    cout << "Enter the value of a, b and c;\n";
    cin >> a >> b >> c;

    int mid = max(min(a,b), min(max(a,b),c));

    cout << mid;
}