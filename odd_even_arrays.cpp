#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int even=0,odd=0,i;
    cout <<"Enter 10 number for odd and even checking\n";
    for (i=0;i<10;i++){
        cin >>a[i];
    }
    for (i=0;i<10;i++){
        if (a[i]%2==0)
        even=even+1;
            else
                odd=odd+1;
    }
cout <<"\nEven elements = "<<even;
cout <<"\nOdd elements = "<<odd;
}