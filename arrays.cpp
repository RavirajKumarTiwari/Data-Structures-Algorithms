#include<iostream>
using namespace std;
int main()
{
    //array example 

    int marks[4] = {23, 45, 56, 89};
    cout<<marks[0];
    cout<<marks[2];

1  // you can cha]value of an array
//marks[2] = [10];
    cout<<marks[0];
    cout<<marks[2]<<"\n";
    int i;
    for (i=0;i<4;i++)
        cout <<marks[i]<<endl;
    return 0;
}
