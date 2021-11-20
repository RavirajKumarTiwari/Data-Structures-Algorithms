#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int year,l;
  cout<<"How many times you want to check :- ";
    cin>>l;
    for (int i = 1; i <= l; i++)
    {
    cout << "\nEnter a year :- ";
    cin >>year;
    
    if (year % 4==0)
    {
      if (year % 100==0)
      {
        if (year % 400==0)
        {
          cout<<year <<"is a leap year\n";
        }
        else
        cout <<year <<" is not a leap year\n";
      
      }
      else
      cout <<year <<" is a leap year\n";
    }
    else
    cout <<year <<" is not a leap year\n";
    }
}
