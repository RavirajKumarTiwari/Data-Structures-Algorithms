/*DATE - 27-07-2021
Let us c solution 
chapter 8 (Arrays)
Exercise - D,Question (b)   */
#include <iostream>
using namespace std;
int main()
{
    int a[25];
    int i,neg=0,even=0,zero=0,pos=0,odd=0;
    cout <<"Enter 25 numbers in the array:\n";
        for (i=0;i<25;i++)
            cin >>a[i];

    for (i=0;i<25;i++){
        if (a[i]<0)
            neg = neg+1;

        if (a[i]>0)
            pos = pos+1;

        if (a[i] == 0)
            zero = zero+1;
        
        if (a[i]%2==0)
            even = even+1;
            else
                odd = odd+1;

    }

    cout <<"\nTotal Zeros = "<<zero<<"\nTotal positive no. = "<<pos<<"\nTotal negative no. = "<<neg;
    cout <<"\nTotal even no. = "<<even<<"\nTotal odd no. = "<<odd;
}