#include <iostream>
using namespace std;
int main()
{
    int i,j,n,num;
    cout <<"Enter the number of Rows: ";
        cin >>n;

    for (i = n;i >= 1;i--){
        for (j = 1;j <= i;j++){
            cout <<"    " <<num;
            num++;
        }
        cout <<endl;
    }
    return 0;
}