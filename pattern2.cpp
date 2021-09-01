#include <iostream>
using namespace std;

int main()
{
    int i,j,n,num;
    cout <<"Enter the number of rows: ";
      cin >>n;

    for (i = n;i >= 1;i--)
    {
        for (j = n;j >= i;j--){
          //cout <<"*";
            cout <<num <<" ";
        num++;
        }
        cout <<"\n";
        
    }
    return 0;
}