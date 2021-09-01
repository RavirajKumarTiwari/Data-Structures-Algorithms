#include <iostream>
using namespace std;

int main()
{
  int x,y;
  cout <<"Enter the value of x and y \n";
   cin >>x >>y;

  if (x==y)
  {
      cout <<"Both are equal";
  }
  else if (x > y){
      cout <<"x is grater than y";
  }
  else{
      cout <<"y is grater than x";
  }  
}