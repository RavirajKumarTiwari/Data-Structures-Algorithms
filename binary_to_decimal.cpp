#include <bits/stdc++.h>
using namespace std;
/*int binaryToDecimal(int n)
{
    int x = 1, ans = 0;

    while(n>0){
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }  
    return ans;  
}*/
// int octalToDecimal(int n)
// {
//     int x = 1, ans = 0;

//     while(n>0){
//         int y = n % 10;
//         ans += x * y;
//         x *= 8;
//         n /= 10;
//     }  
//     return ans;  
// }
int hexadecimalToDecimal(string n)
{
    int x = 1, ans = 0;
    int s = n.size();

    for (int i = s-1;i >= 0;i--){
        if (n[i] >= '0' && n[i] <= '9'){
            ans += x * (n[i]-'0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F'){
            ans += x *(n[i]-'A' + 10);
        }
        x *= 16;
    }
    return ans;
}
int main()
{
    //int n;
    //cout<<"Enter any Binary number: ";
    //cin>>n;
    //cout<<binaryToDecimal(n)<<endl;
    //cout<<octalToDecimal(n)<<endl;
    string n;
    cin>>n;
    cout<<hexadecimalToDecimal(n)<<endl;
}