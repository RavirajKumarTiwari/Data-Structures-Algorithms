// WAP to find the factorial of any number using recursion 

#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0)// base case
    {
        return 1;
    }
    return n * factorial(n - 1);// recursive relation
}

int main()
{
    int n;
    cout<<"Enter any no. ";
    cin>>n;

    cout<<factorial(n);

    return 0;
}