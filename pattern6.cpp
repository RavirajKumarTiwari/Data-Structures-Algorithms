#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout <<"Enter the number of Rows: ";
        cin >>n;

    for (i = 0;i <= n;i ++){
        for (j = 0;j <= n;j ++){
            //if ((i+j) == 5)  
            if ((i+j) <= 5)
                cout <<" ";
            else
                cout <<"*";
                //cout <<j;
                //cout <<i;
                
        }
        cout <<endl;
    }
}