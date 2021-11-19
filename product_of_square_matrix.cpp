//Program to find product of two square matrix

#include<iostream>
using namespace std;
int main()
{
    int i,j,row,column,first[10][10],second[10][10],x[10][10],result[10][10];

    cout <<"Enter the size of square matrix : \n";
        cin >>row;
       column = row;
    cout <<"Enter the elements of 1st matrix :\n";
        for (i=1;i<=row;i++){
            for(j=1;j<=column;j++){
                cin>>first[i][j];
            }
        }
    cout <<"Enter the elements of 2nd matrix :\n";
        for (i=1;i<=row;i++){
            for (j=1;j<=column;j++){
                cin>>second[i][j];
            }
        }

    cout <<"\n____________Ravi Raaz Tiwari____________\n";

    cout <<"\nFirst matrix is :\n";
        for (i=1;i<=row;i++){
            for (j=1;j<=column;j++){
                cout <<first[i][j]<<"\t";
            }
        cout <<"\n";
        }
        
    cout <<"Second matrix is :\n";
        for (i=1;i<=row;i++){
            for (j=1;j<=column;j++){
                cout <<second[i][j]<<"\t";
            }
        cout <<"\n";
        }

    cout <<"\nMultiplication of matrix:\n";
        for (i = 1;i <= row;i++){
            for (j = 1;j <= column;j++){
                
            x[i][j] = first[i][j] * second[j][i];
            //result[i][j] = first[i][j] + second[i][j];
            //cout <<result[i][j]<<"\t";
            cout <<x[i][j]<<"\t";


            }
            cout <<"\n";
        }cout <<"\n~~~~~~~~~~~~Thanks~~~~~~~~~~~~~\n";
    return 0;
} 