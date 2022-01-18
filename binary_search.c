#include<stdio.h>
int binarysearch();// function declaration
int main()
{
    int n=0,i;
    printf("Enter the size of an array:- ");
        scanf("%d",&n);

    int a[n],search;
    printf("Enter the shorted element for array:-\n");
        for(i = 0;i < n;i++)
            scanf("%d",&a[i]);
    printf("Enter the searching element :- ");
        scanf("%d",&search);

        int binarysearch();//todo function calling

    printf("Element found at index %d\n",binarysearch(a,n,search,i));// final output
}
    int binarysearch(int a[],int n,int search,int i)//? function definition
        {
            int l = 0;
            int r = n;
            int mid;
            while (l <= r)
            {
                mid = (l + r) / 2;

                if (search == a[mid]){
                    return mid;
                }
                else if (search < a[mid]){
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }   
            }
            printf("Not found!\n");
            return -1;
        }
