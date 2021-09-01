#include<stdio.h>
int main ()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    printf("%d  %d  %d",*p,**q,***r);
    printf("\nAddress of p = %x   %x",q,&p);
    printf("\nAddress of q = %x   %x",r,&q);
    printf("\nAddress of r = %x",&r);
    
}