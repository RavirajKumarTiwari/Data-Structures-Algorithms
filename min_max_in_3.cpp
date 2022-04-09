#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 cout<<"Enter three number: ";
  cin>>a>>b>>c;
  
if(a>b && a>c)
  cout<<"max = "<<a;
else if(b>a && b>c)
  cout<<"max = "<<b;
else
  cout<<"max = "<<c;

if(a<b && a<c)
  cout<<" min = "<<a;
else if(b<a && b<c)
  cout<<" min = "<<b;
else
  cout<<" min = "<<c;
  
}