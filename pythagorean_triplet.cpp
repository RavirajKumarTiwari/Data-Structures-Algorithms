//#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
bool check(int x,int y,int z){
    int a = max(x,max(y,z));//to find the max between three numbers
    // cout<<"Max = "<<a<<endl;
    int b,c;

    if(a == x){
        b = y;
        c = z;
    }
    else if(a == y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }
    //pow(a,2) This is used to find the a^2
    if(pow(a,2) == pow(b,2) + pow(c,2))
    {
        // cout<<"a^2 = "<<pow(a,2)<<endl;
        // cout<<"b^2 = "<<pow(b,2)<<endl;
        // cout<<"c^2 = "<<pow(c,2)<<endl;
        // cout<<"b^2 + c^2 = "<<pow(c,2) + pow(b,2)<<endl;

        return true;
    }
    else
        return false;
}
int main(){
    int x, y, z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}