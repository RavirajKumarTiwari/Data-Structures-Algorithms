//DATE:-12-08-2021
//WAP to convert string from upper case to lower case

#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[50];
     int i;
    printf("Enter the string :- ");
        gets(s1);
    /*strlwr(s1);   //for printing string in lower case
    printf("Lower case string is :- %s\n",s1);

    strupr(s1);   //for printing string in upper case
    printf("Upper case string is :- %s\n",s1);
*/  //________________OR__________________
    int length = strlen(s1);
    for (int i = 0; i <= length; i++)
    {
        if (s1[i] >= 65 && s1[i] <= 90) //ASCII Value of A=65, a=97...........Z=90, z=122
        //if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] = s1[i]+32;   //97-65=32 (ASCII value of lower case - upper case)
        }

    }
    
    printf("Lower case string is :- %s",s1);
}