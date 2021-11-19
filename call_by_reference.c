#include<stdio.h>
void fun (int *,int *);//function declaration
int main()//main function
{
    int x=5,y=7;
    fun(&x,&y);// call by reference
    printf("x = %d y = %d\n",x,y);//output x = 7 y = 5
}
void fun (int *x,int *y)//function defination
{
    *x = 7;
    *y = 5;
    printf("x = %d y = %d\n",*x,*y);//output x = 7 y = 5
}