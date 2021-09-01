//date 14-07-2021
/*WAP to read marks of 5 students calculate sum and avg using arrays*/

#include <iostream>
using namespace std;
int main()
{
    int mark [5],i;
float sum=0.0,avg;

cout <<"\nEnter the marks of students: ";
for (i=0;i<5;i++){
    cin >>mark[i];
}
for (i=0;i<5;i++){
    sum =sum+mark[i];
}
avg = sum /5.00;
cout <<"Totel marks: "<<sum;
cout <<"\nAvg: "<<avg;
}
