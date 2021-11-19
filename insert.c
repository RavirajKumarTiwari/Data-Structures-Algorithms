#include <stdio.h>
//#include <stdlib.h>

int main()
{
    int a[100],i=0,n,data,pos;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&a[i]);
    }
    printf("The array before insertion of element is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the element to be inserted: ");
    scanf("%d",&data);
    printf("\nEnter the position of the element to be inserted: ");
    scanf("%d",&pos);
    n++;
    for(i=n;i>=pos;i--)
        a[i]=a[i-1];
    a[pos-1]=data;

    printf("array after insertion :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}