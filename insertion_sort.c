#include<stdio.h>
void main()
{
 int a[10],n,i,j,t;
 
 printf("Enter the array size :\n");
 scanf("%d",&n);
 
 printf("Enter the elements of Array :\n");
 for(i=0;i<n;i++)
 {
   scanf("%d", & a[i]);  
 }

 for(i=1;i<n;i++)
 {
   t = a[i];
   j = i - 1; 
   
   while(j>=0 && t<a[j])
   {
     a[j+1] = a[j];
     j = j - 1;
   }
   
   a[j+1] = t;
 }
 
 printf("Sorted Array is:\n");
 
 for(i=0;i<n;i++)
 {
   printf("%d\t",a[i]);
 }
 
}