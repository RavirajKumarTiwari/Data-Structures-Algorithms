#include <iostream>
using namespace std;
int binaryToDecimal(int n)
{
    int x = 1, ans = 0;

    while(n>0){
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }  
    return ans;  
}
int main()
{
    int n;
    //cout<<"Enter any Binary number: ";
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
}