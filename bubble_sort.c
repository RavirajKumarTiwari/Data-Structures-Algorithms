#include<stdio.h>
int main ()
{
    int a[15],n,t,i,j;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter the elements of array:\n");
    
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);  
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("Sorted array is :   ");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
}