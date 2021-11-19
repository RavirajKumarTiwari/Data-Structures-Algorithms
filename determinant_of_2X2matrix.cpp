#include<iostream>
using namespace std;
int main()//main function
{
    int i,j,det[10][10];//variable decleration
    long determinant;
//executable part
    cout <<"Enter the 4 elements of 2x2 matrix : \n";//display the output 
        for (i=1;i<=2;i++){
            for (j=1;j<=2;j++){
                cin >>det[i][j];//get the input from user
            }
        }
    
    cout <<"Matrix is : \n";//display the output 
        for (i=1;i<=2;i++){
            for (j=1;j<=2;j++){
                cout <<det[i][j]<<"\t";//displsy the entered Matrix
            }
        cout <<endl;
        }
    determinant = det[1][1]*det[2][2] - det[1][2]*det[2][1];
    cout <<"\ndeterminant of 2 X 2 Matrix is : "<<determinant;//display the final result 
}