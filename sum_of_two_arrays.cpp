//date 15-07-2021
//WAP to read two arrays of size 5 and store sum of these arrays into third array.

#include <iostream>
using namespace std;
int main()
{
    int a[5], b[5], sum[5], i;

cout <<"Enter the elements of 1st arrays\n";
    for (i=0;i<5;i++){
        cin >>a[i];
    }
cout <<"Enter the elements of 2nd arrays\n";
    for ( i = 0; i < 5; i++)
    {
        cin >>b[i];
    }
for ( i = 0; i < 5; i++){
    sum[i] = a[i] + b[i];
}
for (i=0;i<5;i++) 
cout <<"\nsum of array elements at index "<<i<<" is "<<sum[i];

cout <<"\n\nSum of 1st and 2nd array is = ";
    for ( i = 0; i < 5; i++)
        cout <<sum[i];
}