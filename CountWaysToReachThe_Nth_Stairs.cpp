//Count Ways To Reach The N - th Stairs (Codestudio) by coding Ninja

#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int countDistinctWays(int nStairs)
{
    // base case
    if (nStairs < 0)
        return 0;
    if (nStairs == 0)
        return 1;
    // R.C
    int ans = countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
    return ans;
}
int main()
{
    int nStairs;
    cout << "Enter the value of nStairs : ";
    cin >> nStairs;

    cout << countDistinctWays(nStairs);
}