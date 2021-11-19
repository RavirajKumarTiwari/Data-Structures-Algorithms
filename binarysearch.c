
//DATE:- 4-oct-2021
//WAP to binary search

#include<stdio.h>
int binarySearch(int arr[],int size,int item){//function defination
    int beg = 0,end = size;
    while (beg <= end)
    {
        int mid = (beg+end)/2;
        if (arr[mid] == item){
            printf("index = ");
            return mid;
        }
        else if (arr[mid] > item)
        {
            beg = mid - 1;
        }
        else{
            beg = mid+1;
        }
        
    }
    return -1;
    }
int main()
{
    printf("Enter the size of the array :- ");
    int n;
    scanf("%d",&n);
    printf("Enter the elements of the array :-\n");
    int arr[n];
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element that find in the array :- ");
    int key;
    scanf("%d",&key);
    int recived;
    recived = binarySearch(arr,n,key);//function call

    if (recived == -1)
        printf("Not found!\n");
    else
    printf("%d \n",recived);

    return 0;
}