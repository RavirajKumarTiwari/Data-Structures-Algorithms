#include<stdio.h>
int main()
{
    int a[] = {1,2,3,4,5};
    int *p = &a[0];
    int *q = &a[4];

    int d = p - q;
    printf("d = %d\n ",d);

    *q = 25;
    printf("q = %d\n",*q);

    d= q - p;
    printf("q - p = %d\n",d);

    *p = 27;
    printf("p = %d\n",*p);

    printf("address of q = %x\n",q);
    q = q-3;
    printf("address of q = %x\n",q);
    printf("address of p=%x\n",p);
    p = p+3;
    printf("address of p = %x\n",p);
    
    d = p-q;
    printf("p-q = %d\n",d);
}