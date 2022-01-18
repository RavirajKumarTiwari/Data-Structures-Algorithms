#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n;
    
    cout << "Enter the number of Rows : ";
        cin >> n;

    for (i = 1;i <= n;i++){
        for (k = 1;k <= (n-i);k++){
            cout <<" ";
        }
        for (j = 1;j <= 2*i-1;j++){
            //cout <<"*";
            cout <<i;
        }
        cout <<"\n"; 
    }
   for (i = n-1;i >= 1;i--){
       for (k = 1;k <= (n-i);k++){
           cout <<" ";
       }
         for (j = 1;j <= 2*i-1;j++){
            //cout <<"*";
            cout <<i;
        }
        cout <<"\n"; 
    }
   }
