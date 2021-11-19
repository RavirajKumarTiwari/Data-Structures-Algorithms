//wap to find length of a string
#include<stdio.h>//stander input output header file
#include<string.h>//header file for strlen
int main ()
{
    int i,count = 0;
    char name[30];
    printf("Enter the name:\n");
        gets(name);

    //count = strlen(name);
    //_____________OR______________ 
    while (name[i] != '\0')
    {
        /* code */
        count++;
        i++;
    }
    
    printf("String length is :- %d",count);
}