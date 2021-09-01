#include<iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter any numbe: ";
     cin >>n;

    if (n%2==0 && n%3==0)
    {
        cout <<"Divisible by both 2 and 3\n";
    }
    else if (n%2==0)
    {
        cout <<"Only divisible by 2\n";
    }
    else if (n%3==0)
    {
        cout <<"Only divisible by 3\n";
    }
    else
    {
        cout <<"Divisible by none\n";
    }
}