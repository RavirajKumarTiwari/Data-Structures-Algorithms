//24-07-2021
//Program to print transpose of a matrix 

#include<iostream>//header file 
using namespace std;
int main()//main function
{
    int a[10][10];//variable declaration part 
    int i,j,row,column;

//take size of row and column from user
    cout <<"Enter the size of row for matrix : ";//dispaly output 
        cin >>row;//take size of row in row variable 
    cout <<"Enter the size of column for matrix : ";//display output 
        cin >>column;//take size of column in column variable 

//take the elements of matrix from user
    cout <<"Enter the elements of matrix :\n";//display the output 
    for (i=0;i<row;i++)
    {
        for (j=0;j<column;j++)
        {
            cin >>a[i][j];//take input 
        }
    }

//print the matrix that user gave 
    cout <<"Matrix is :\n";
    for (i=0;i<row;i++)
    {
        for (j=0;j<column;j++)
        {
            cout << a[i][j] << "\t";//display the output 
        }
        cout <<"\n";
    }

//print the transpose of matrix
    cout <<"Transpose of Matrix :\n";//display the output 
    for (i=0;i<column;i++)
    {
        for (j=0;j<row;j++)
        {
            cout<<a[j][i]<<" ";//display the output 
        }
        cout<<"\n";
    }
cout << "--------------Thak you----------------\n~~~~~~~~~~Raviraj tiwari~~~~~~~~~~~~~~\n";
}
    