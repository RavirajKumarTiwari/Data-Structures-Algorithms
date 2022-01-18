#include<stdio.h>

int main ()
{
    char name[30];
    printf("Enter the name :  \n");
        scanf("%s",name);

    //printf("%s\n",name);
    //printf("%.5s\n",name);
    //printf("%.10s\n",name);
    printf("%5.1s\n",name);
    puts(name);
    puts(name);

}