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

    // Check if Doubly Linked list is Palindrome or not
    bool isPalindrom(Node* &head, Node* &tail){
        while(head != tail && tail != head->prev){
            if(head->data != tail->data){
                return false;
            }
            head = head->next;
            tail = tail->prev;
        }
        return true;
    }
};

int main(){
    DoublyLinkedList dll;

    dll.insertAtTail(10);
    dll.insertAtTail(20);
    dll.insertAtTail(30);
    dll.insertAtTail(20);
    dll.insertAtTail(10);

    cout<< "Doubly Linked List:\n";
    dll.print(dll.head);

    if(dll.isPalindrom(dll.head, dll.tail)){
        cout<< "True";
    }
    else{
        cout<< "False";
    }
}
