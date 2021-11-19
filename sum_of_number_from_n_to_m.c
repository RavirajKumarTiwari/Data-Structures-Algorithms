#include<stdio.h>
int main()
{
    int i,n,m,sum;
    printf("Enter the value of n: ");
        scanf("%d",&n);
    i=n;
    printf("Enter the value of m: ");
        scanf("%d",&m);

    while (i <= m)
    {
            sum = sum+i;
            i = i + 1;
    }
    printf("\nThe sum of numbers from %d to %d = %d\n",n,m,sum);
    return 0;
}