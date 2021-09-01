//WAP to compare two strings

#include<stdio.h>//stander input output header file
#include<string.h>//header file for strcmp
int main ()
{
    char s1[20];
    char s2[20];
    int value;

    printf("Enter the value of string 1 :- ");
        gets(s1);
    
    printf("Enter the value of string 2 :- ");
        gets(s2);

    value = strcmp(s1,s2);//for compare two strings

        if (value == 0){
            printf("\nBoth String is Same");
        }
        else
            printf("\n Strings are Not Same");
        
    printf("\n%d",value);
}