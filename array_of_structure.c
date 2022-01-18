#include<stdio.h>
int main()
{
    int i = 0;
    struct student
    {
        int roll;
        char name[20];
        float marks;
    };
    struct student s1[3];

    for (i = 0;i <=2;i++)
    {
    printf("Enter the student Name : ");
        scanf("%s",s1[i].name);
    printf("Enter the roll no. : ");
        scanf("%d",&s1[i].roll);
    printf("enter the marks : ");
        scanf("%f",&s1[i].marks);
    }
    for (i = 0;i <=2;i++)
    {
    printf("\ninfo of student :\n");
    printf("Student Name : %s",s1[i].name);
    printf("\nStudent Roll no. : %d",s1[i].roll);
    printf("\nStudent Marks : %0.3f",s1[i].marks);
    }
    printf("\n");
    
}