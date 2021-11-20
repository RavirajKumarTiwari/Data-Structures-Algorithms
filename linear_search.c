#include  <stdio.h>
int main()
{
  int n=0;
    printf("Enter the size of array :- ");
        scanf("%d",&n);
    
  int a[n],i,search,found = 0;
    printf("Enter the %d elements of an array:- \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Enter the element that find... ");
        scanf("%d",&search);
    
    for(i = 0;i < n;i++)
    {
        if(a[i] == search)
        {
            printf("Elements found at index :- %d\n",i);
            found = 1;
            break;
        }
    }
    if(found == 0)// or if (i == 8)
        printf("Element not found");
}