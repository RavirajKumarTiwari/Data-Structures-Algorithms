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

    // Reverse the linked list
    Node* reverseDLL(Node* &head){
        Node* currPtr = head;
        Node* nextPtr = NULL;
        Node* prevPtr = NULL;
        while(currPtr != NULL){
            Node* nextPtr = currPtr->next;
            currPtr->next = prevPtr;
            prevPtr = currPtr;   
            currPtr = nextPtr;
        }
        head = prevPtr;
        return head;
    }
};

int main(){
    DoublyLinkedList dll;

    dll.insertAtTail(10);
    dll.insertAtTail(20);
    dll.insertAtTail(30);
    dll.insertAtTail(40);
    dll.insertAtTail(50);

    cout<< "Doubly Linked List:\n";
    dll.print(dll.head);

    Node* newHead;
    newHead = dll.reverseDLL(dll.head);

    cout<< "Reversed Linked List\n";
    dll.print(newHead);
}