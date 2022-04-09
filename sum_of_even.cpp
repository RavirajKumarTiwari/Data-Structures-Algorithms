//C Program to accept ten numbers and display sum of even and product of odd numbers
#include<iostream>
using namespace std;
int main()
{
    int arr[11],i,sum = 0,pro = 1;
    cout<<"Enter 10 numbers :: ";
    for(i = 1;i <= 10;i++)
        cin>>arr[i];

    for (i = 1;i <= 10;i++)
    {
       if(arr[i] % 2 == 0)
       {
           cout<<" Even = "<<arr[i];
           sum = sum + arr[i];
       }
       else{
        cout<<"\n Odd = "<<arr[i];
        pro = pro*arr[i];
       }
    }
    cout <<"\nSum of even = "<<sum;
    cout <<"\nProduct of odd = "<<pro;

}