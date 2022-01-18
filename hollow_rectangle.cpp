#include <iostream>
using namespace std;
int main()
{
    int i,j,row,column;

    cout <<"Enter the number of rows: ";
        cin >>row;
    cout <<"Enter the number of column: ";
        cin >>column;

    for (i = 1; i <= row; i++) {
        for (j = 1; j <= column; j++) {
          if (i == 1 || i == row || j == 1 || j == column) {
            cout <<"*";
        }else{
            cout <<" ";
        }
        
        }
        cout <<endl;
    }
    return 0;
}