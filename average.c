#include<stdio.h>
int main ()
{
    int n,i,sum;
    float avg;

    printf("Enter the value of n: ");
        scanf("%d",&n);

    do{
        sum = sum + i;
        i = i + 1;
    }
    while (i <= n);
        avg = (float)sum/n;
        printf ("The sum of first %d numbers is: %d",n,sum);
        printf ("\nThe average of first %d numbers is: %.3f",n,avg);
    
    return 0;
}