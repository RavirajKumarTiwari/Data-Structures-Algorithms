
//DATE:- 12-08-2021
//WAP to reverse a string

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    printf("Enter the string :- ");
    gets(s1);
    strrev(s1);
    //------------OR--------------
   /* int length;
    length = strlen(s1);
        for (int i = 0; i < length/2; i++)
        {
            char ch = s1[i];
            s1[i] = s1[length - 1 - i];
            s1[length - 1 - i] = ch;
        }
     */   
    printf("Reverse string is :- %s",s1);
}