//C Program to check a triangle is a equilateral, isosceles or scalene

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of triangle : \n");
        scanf("%d%d%d",&a,&b,&c);
    if (a == b && b ==c)
        printf("Equilateral");
    else if (a == b || a == c || b == c)
        printf("Isosceles");
    else
        printf("Scalen");
}