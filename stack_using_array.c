#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE], top = -1;
int push(int value)
{
    if(top == SIZE - 1)
        printf("Stack is full!!!  Insertion is not possible.\n");
    else
    {
        ++top;
        stack[top] = value;
        printf("Insertion is succesful.\n");
    }
}
int pop()
{
    if(top == -1)
        printf("Stack is empty. Deletion is not possible.\n");
    else
    {
        printf("%d is deleted.\n", stack[top]);
        --top;
    }
}
int display()
{
    int i;
    if(top == -1)
        printf("Stack is empty.\n");
    else
        {
            printf("The elements in stack are:\n");
            i = top;
            while (i >= 0)
            {
                printf("%d\n", stack[i]);
                --i;
            }
        }
}
int main()
{
    int value, choice;
    while(1)
    {
        printf("*****MENU*****\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                //break;
            default:
                printf("Invalid input.\n");
        }
        printf("\n");
    }
    return 0;
}
