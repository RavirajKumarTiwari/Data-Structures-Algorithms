/*
Problem Statement: Given the head of a doubly linked list, delete the nodes whose neighbors have the same
value. Traverse the list from right to left.
*/
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        // Constructor
        Node(int val){
            this->data = val;
            prev = NULL;
            next = NULL;
        }
        
        ~Node(){
            if(next == NULL){
                delete next;
            }
        }
};

class DoublyLinkedList{
    public:
        Node* head;
        Node* tail;

        DoublyLinkedList(){
            head = NULL;
            tail = NULL;
        }
    // display doubly linked list
    void print(Node* &head){
        Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
    }

    // insert a node at tail of doubly linked list
    void insertAtTail(int data)
    {
        Node *new_node = new Node(data);

        // for empty list
        if (tail == NULL)
        {
            tail = new_node;
            head = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
    void deleteSameNeighbourNode(Node* &head, Node* &tail){
        Node* currNode = tail->prev; // Second last node

        while (currNode != head){
            Node* prevNode = currNode->prev;
            Node* nextNode = currNode->next;
            if(prevNode->data == nextNode->data){
                // Delete currNode
                prevNode->next = nextNode;
                nextNode->prev = prevNode;
                free(currNode);
            }
            currNode = prevNode;
        }
    }

};

int main(){
    DoublyLinkedList dll;

    dll.insertAtTail(2);
    dll.insertAtTail(1);
    dll.insertAtTail(1);
    dll.insertAtTail(2);
    dll.insertAtTail(1);

    cout<< "Doubly Linked List:\n";
    dll.print(dll.head);

    

    cout<< "After removing same neighbouring Node\n";
    dll.deleteSameNeighbourNode(dll.head, dll.tail);
    dll.print(dll.head);
}