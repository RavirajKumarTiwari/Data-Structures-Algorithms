// ? Date :-30.aug.2021

//! WAP to find max and min no in an array elements that user entered


#include<stdio.h>// header file 
int main ()// ? main function
{
    int a[50],size,i,min,max,t;//variable declaration
    printf("Enter the test case :-  ");//display the output 
        scanf("%d",&t);//get input from user
    
for (int j = 0; j < t; j++)//for loop
    {
    printf("Enter the size :- ");//display the output
    scanf("%d",&size);//get the input from user

    printf("Enter the elements of array :-\n");//print the output
    for ( i = 0; i < size; i++)//for loop 
    {
        scanf("%d",&a[i]);//get the input from user 
    }

    min = max = 0;//initialise the min and max variable with 0

    for (i = 1;i < size;i++)//for loop 
    {
        if (a[i] > a[max])//todo check the condition if true then put the value of i in max variable
        {
            max = i;
        }
        else if (a[i] < a[min])//todo if upper if contition fail then check this condition if this condition is true then put the value of i in min variable
        {
            min = i;
        }
        
    }
    printf("min = %d\n",a[min]);//print the output 
    printf("max = %d\n",a[max]);//print the output
    }
    printf("\n");//next line
}
