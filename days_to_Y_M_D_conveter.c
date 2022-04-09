/*  C program to convert Total days to year, month and days  */

#include <stdio.h>

int main(void)
{
    int day,year,month,nd;
    printf("Enter number of days :: ");
    scanf("%d",&day);
    year=day/365;
    day=day%365;
    month=day/30;
    nd=day%30;
    printf("\n%d years, %d months, %d days\n",year,month,nd);
    return 0;
}