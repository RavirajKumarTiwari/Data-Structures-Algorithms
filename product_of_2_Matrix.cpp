//write a program to print the product of two matrix 

#include <iostream>
using namespace std;
int main()
{
    int first[10][10] = {0},i,j,k,row,column,sum = 0;
    int res[10][10] = {0};

    cout <<"Enter the row of 1st matrix : \n";
        cin >>row;
    cout <<"Enter the column of 1st matrix : \n";
        cin >>column;
    cout <<"Enter the elements of 1st matrix :\n";
        for (i=0;i<row;i++){
            for(j=0;j<column;j++){
                cin >>first[i][j];
            }
        }

int row1,column1,second[10][10] = {0};
        cout <<"Enter the row of 2nd matrix : \n";
        cin >>row1;
    cout <<"Enter the column of 2nd matrix : \n";
        cin >>column1;
    cout <<"Enter the elements of 2nd matrix :\n";
        for (i=0;i<row1;i++){
            for (j=0;j<column1;j++){
                cin >>second[i][j];
            }
        }

    cout <<"\n____________Ravi Raaz Tiwari____________\n";

    cout <<"\nFirst matrix is :\n";
        for (i=0;i<row;i++){
            for (j=0;j<column;j++){
                cout <<first[i][j]<<"\t";
            }
        cout <<"\n";
        }
        
    cout <<"Second matrix is :\n";
        for (i=0;i<row1;i++){
            for (j=0;j<column1;j++){
                cout <<second[i][j]<<"\t";
            }
        cout <<"\n";
        }

    if(column!=row1)
        cout <<"\n_______ Can not multiply _______";
    else
    {
    for (i=0;i<row;i++)
    {
        for (j=0;j<column1;j++)
        {
            sum = 0;
            for (k=0;k<column;k++)
            {
                sum = sum + first[i][k]*second[k][j];
            }
            res[i][j] = sum;
        }
    }
    cout <<"result matrix is : \n";
    for (i=0;i<row1;i++)
    {
        for (j=0;j<column1;j++)
        {
            cout <<res[i][j]<<"\t";
        }
        cout <<"\n";
    }
    }
}