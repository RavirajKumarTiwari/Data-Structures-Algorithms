//WAP to connect two strings

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30] = "Ravi", s2[] = " Raaz";

    //strcat(s1,s2);

//________________OR__________________________

    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i;

    for (i=0;i<=len2;i++){
        s1[len1 + i] = s2[i];
    }


    puts(s1);

}