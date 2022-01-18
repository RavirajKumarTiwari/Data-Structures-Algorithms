#include<iostream> //input output header file 
using namespace std;
int main () //main function
{
    int i,j, row, column, first[10][10],second[10][10],sum[10][10]; //variable declaration part

//executable part

    cout <<"Enter the Rows and Columns:  \n";//user input : 1
        cin >>row>>column;
    cout <<"Enter the elements of 1st matrix: \n";//usear input : 2
        
        for (i = 1;i <= row;i++){
            for (j = 1;j <= column;j++){
                cin >>first[i][j];
            }
        }
    cout <<"Enter the elements of 2nd matrix: \n";//usear input : 3

        for (i = 1;i <= row;i++){
            for (j = 1;j <= column;j++){
                cin >>second[i][j];
            }
        }

        cout <<"______Ravi RaaZ Tiwari______\n\n";//display the output

        cout <<"1nd Matrix :\n";  //display the 1st matrix
        for (i = 1;i <= row;i++){
            for (j = 1;j <= column;j++){
                cout <<first[i][j]<<"\t";
            }
            cout <<"\n";
        }

        cout <<"\n2nd Matrix :\n";  //display the 2nd matrix
        for (i = 1;i <= row;i++){
            for (j = 1;j <= column;j++){
                cout <<second[i][j]<<"\t";
            }
            cout <<"\n";
        }

        cout <<"\nsum of 1st and 2nd matrix: \n"; //display the final result
        //cout <<"\nsubstraction of 1st and 2nd matrix: \n";

            for (i = 1;i <= row;i++){
                for (j = 1;j <= column;j++){

                    sum[i][j] = first[i][j] + second[i][j];
                    //sum[i][j] = first[i][j] - second[i][j];

                    cout <<sum[i][j]<<"\t";
                }
                cout <<"\n";
            }
        return 0;
}  