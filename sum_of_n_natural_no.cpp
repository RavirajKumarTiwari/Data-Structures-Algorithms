#include<iostream>
#include<math.h>
using namespace std;
int sum(int n){
    int ans  = 0;
    ans =n*(n+1)/2;
    // for(int i = 1;i <= n;i++)
    //     ans+=i;
    return ans;
}
int main()
{
    int n;
    //cout<<"Enter any natural number: ";
    cin>>n;
    cout<<sum(n)<<endl;
}
