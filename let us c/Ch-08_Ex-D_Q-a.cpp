/*DATE - 26-07-2021
Let us c solution
chapter 8 (Arrays)
Exercise - D,Question (a)   */

#include<iostream>
using namespace std;
int main()
{
    int a[25],i,present=0,num;

cout <<"Please enter 25 numbers:\n";
    for (i=0;i<25;i++)
    {
        cin >>a[i];
    }
cout <<"Enter the number to be searched:";
    cin >>num;

    for (i=0;i<25;i++)
    {
        if (num == a[i])
        present = present+1;
    }
    if (present == 0)
        cout <<"\nNumber does not present in array\n";
        else
        {
            cout <<"\nNumber present in array\n";
            cout <<"Number of times it appears = " <<present;
        }
     
}