#include <iostream>
using namespace std;

long long int sumOrProduct(long long int n, long long int q)
{
    // Write your code here.
    long long sum = 0, mul = 1;

    long long max = 0;
    long long min = 0;
    if (n > q)
    {
        max = n;
        min = q;
    }
    else
    {
        max = n;
        min = q;
    }

    cout<<max<<"\n"<<min<<"\n";

    for (min; min <= max; min++)
    {
        sum = sum + min;
        mul = mul * min;
    }
    cout<< sum<<"\n"<< mul;
    return;
}

int main ()
{
    int n, q;

    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"Enter the value of q: ";
    cin>>q;

    cout<<sumOrProduct(n, q);
}