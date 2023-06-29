// WAP to print counting using recursion

#include<iostream>
using namespace std;

void reverseCount(int n)
{
    // base case
    if(n == 0){
        return;
    }
    cout<<n <<endl;
    reverseCount(n-1);// recursive relation
}
    int main()
{
    int n;
    cout<<"Enter any no. ";
    cin>>n;

    reverseCount(n);

    return 0;
}