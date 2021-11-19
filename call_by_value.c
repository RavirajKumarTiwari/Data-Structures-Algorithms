#include<stdio.h>
void fun(int,int);//function declaration
int main()
{
    int x =5,y=7;
     fun(x,y);//call by value
    printf("x = %d y = %d",x,y);//output x = 5 y = 7
}
void fun(int x,int y)//function defination
{
    x = 7;
    y = 5;
    printf("x = %d y = %d\n",x,y);//output x = 7 y =5
}