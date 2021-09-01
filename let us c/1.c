#include<stdio.h>
int main ()
{
    int a[50],size,i,min,max,t;
    printf("Enter the test case :-  ");
        scanf("%d",&t);
    
for (int i = 0; i < t; i++)
    {
    printf("Enter the size :- ");
    scanf("%d",&size);

    printf("Enter the elements of array :-\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }

    min = max = 0;

    for (i = 1;i < size;i++)
    {
        if (a[i] > a[max])
        {
            max = i;
        }
        else if (a[i] < a[min])
        {
            min = i;
        }
        
    }
    printf("%d",a[min]);
    printf("%d",a[max]);
    }
    printf("\n");
}
