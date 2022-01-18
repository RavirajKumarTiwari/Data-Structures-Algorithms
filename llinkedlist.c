#include<stdio.h>
#include <stdlib.h>
int main ()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    head = 0;
    int choice;
    printf("Enter the size of linked list   ");
    scanf("%d",&choice);
   // while(choice == 1)
   for (int i = 0; i < choice; i++)
    {
        newnode = (struct node*) malloc(sizeof (struct node));
        printf("Enter data  ");
        scanf("%d",&newnode -> data);//assign value to information part of a node
        newnode -> next = 0;//assign null to the adder part of newly created node
        //create link between head and 1st node 
        if (head == 0)
        {
            head = temp = newnode;
        }
        else{//creat link for other node
            temp ->next=newnode;
            temp = newnode;
        }
       //  printf("Do you want to continue\n If yes then enter '1'\n If no then enter '0'\n");//display output
       // scanf("%d",&choice);//take input from user  
    }
    temp = head;
        while (temp != 0){
            printf("%d  ",temp -> data);//print the elements of linked list
            temp = temp->next;
        }

    
}