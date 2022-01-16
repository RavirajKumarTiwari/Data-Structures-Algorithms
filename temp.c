#include<stdio.h>
int main ()
{
      int n;
      printf("Enter the size of array:-   ");
            scanf("%d",&n);

      int a[10];

      printf("Enter the %d elements of array :\n",n);
      for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
      int data;
      printf("Enter the searching elements :");
            scanf("%d",&data);

      int l=0,r=n,found = 0;

      while (l<=r)
      {
            int mid = (l+r)/2;
            if (data == a[mid])
            {
            printf("Index = %d\n",mid);
            found++;
            break;
            }
            else if (data < a[mid])
            {
                  r = mid - 1;
            }
            else
            {
               r = mid + 1;
            }
      }
      if (n==found){
      printf("Not Found!");
      }
}

