#include <stdio.h>
//int ans(int,int,int,int);//function declaration


    int ans(int a,int b,int c,int d)//function defination
    {
        if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("%d",a);
			}
			else
			{
				printf("%d",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d",c);
			}
			else
			{
				printf("%d",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("%d",b);
			}
			else
			{
				printf("%d",d);
			}
		}

		else
		{
			if(c>d)
			{
				printf("%d",c);
			}
			else
			{
				printf("%d",d);
			}
		}
	}
    }    
    int main() {//main function 
    int a, b, c, d, res;//variable declaration
        scanf("%d %d %d %d", &a, &b, &c, &d);
    res = ans(a, b, c, d);//function calling assign the return value in 'res'
       // printf("%d",res);//print the result 
       return 0; 
}
