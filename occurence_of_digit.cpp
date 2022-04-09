//C Program to check the occurence of digit in a given number
#include<iostream>
using namespace std;
int main ()
{
    int num,digit,k,n;
    cout <<"Enter any number : ";
        cin >>num;
        int i = 0;
        n = num;
    cout <<"Enter digit :";
        cin >>digit;
    while (n!=0)
    {
        k = n%10;
        n = n/10;
        if(k == digit)
        i++;
    }
    cout <<"\nThe occurance "<<digit<<" is "<<i<<" times ";
    
}