/*DATE - 27-07-2021
Program to print sum of indivusal rows and columns  */
#include<iostream>
using namespace std;
int main()
{
    int a[5][5],i,j,sr,sc;
    cout <<"Enter the elements of Matrix :\n";
        for(i=0;i<5;i++){
            for(j=0;j<5;j++)
                cin >> a[i][j];
        }
    cout <<"The Matrix is : \n";
    for(i=0;i<5;i++){
            for(j=0;j<5;j++)
                cout << a[i][j]<<"\t";
            cout << endl;
        }
    for (i=0;i<5;i++)
    {
        sr = sc = 0;

        for (j=0;j<5;j++)
        {
            sr = sr+a[i][j];
            sc = sc+a[j][i];
        }
        cout <<"\n\nSum of Row " <<i <<"\t= " <<sr;
        cout <<"\nSum of Column " <<i <<"\t= " <<sc;
    }
}