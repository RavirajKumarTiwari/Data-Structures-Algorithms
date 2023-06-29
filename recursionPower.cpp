// WAP to find the 2^n using recursion

#include<iostream>
using namespace std;

int power(int n)
{
    if(n == 0) // base case
        return 1;
    
    return 2 * power(n-1); // recursive relation
}

int main()
{
    int n;
    cout<<"Enter any no. ";
    cin>>n;

    cout<<power(n); // calling the power function 

    return 0;
}