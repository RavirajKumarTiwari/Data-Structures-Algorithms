//Count Ways To Reach The N - th Stairs (Codestudio) by coding Ninja

//Question:-

// You are climbing a staircase.It takes n steps to reach the top.Each time you can either climb 1 or 2 steps.In how many distinct ways can you climb to the top?

//solution :- 

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