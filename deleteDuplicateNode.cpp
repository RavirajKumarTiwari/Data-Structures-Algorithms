#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int val)
    {
        this->data = val;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    void insertAtTail(int data)
    {
        // Linked List is empty
        if (head == NULL)
        {
            head = new Node(data);
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new Node(data);
        return;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }

    void deleteDuplicateNodes()
    {
        Node *temp = head;
        while (temp != NULL && temp->next != NULL)
        {
            // If the current node and the next node have the same data, skip the next node
            if (temp->data == temp->next->data)
            {
                temp->next = temp->next->next;
            }
            // Otherwise, move to the next node
            else
            {
                temp = temp->next;
            }
        }
    }

    // Or
    // Node *currNode = head;
    // while (currNode != NULL)
    // {

    //     while (currNode->next != NULL && currNode->data == currNode->next->data)
    //     {
    //         // remove currNode->next
    //         Node *temp = currNode->next; // node to be deleted
    //         currNode->next = currNode->next->next;
    //         free(temp);
    //     }
    //     // This loop ends when value of current node and next are different
    //     //  or LinkedList ends
    //     currNode = currNode->next;}

    };

    // Main function
    int main()
    {
        LinkedList objL;
        objL.insertAtTail(1);
        objL.insertAtTail(2);
        objL.insertAtTail(2);
        objL.insertAtTail(4);
        objL.insertAtTail(4);
        objL.insertAtTail(6);
        objL.insertAtTail(6);
        objL.insertAtTail(8);
        objL.insertAtTail(8);
        objL.insertAtTail(10);

        cout << "Linked List before deleting duplicate nodes: ";
        objL.display();
        objL.deleteDuplicateNodes();
        cout << "\nLinked List after deleting alternate nodes: ";
        objL.display();

        return 0;
    }