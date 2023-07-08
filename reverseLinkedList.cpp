// Reverse the Linked List
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        this->data = val;
        next = NULL;
    }

    ~Node() {
        if (next != NULL) {
            delete next;
        }
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insertAtTail(int data) {
        // Linked List is empty
        if (head == NULL) {
            head = new Node(data);
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new Node(data);
        return;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    Node* reverseLinkedList(Node* head) {
        Node* prevPtr = NULL;
        Node* currPtr = head;
        while(currPtr != NULL){
            Node* nextPtr = currPtr->next;
            currPtr->next = prevPtr;
            // move all 3 pointers (prevPtr, currPtr, nextPtr) by 1 step ahead
            prevPtr = currPtr;
            currPtr = nextPtr;
        }
        // When this loop ends, prevPtr pointing to last node which is new node
        Node* newHead = prevPtr;
        return newHead;
    }

    // Revere Linked List using Recursion
    Node* recuReverseLinkedList(Node * head){
        // Base Case
        if(head == NULL || head->next == NULL){
            return head;
        }

        // Recursive Case
        Node* newHead = recuReverseLinkedList(head->next);
        head->next->next = head;
        head->next = NULL;

        return newHead;
    }

};


int main() {
    LinkedList objL;
    objL.insertAtTail(1);
    objL.insertAtTail(2);
    objL.insertAtTail(3);
    objL.insertAtTail(4);
    objL.insertAtTail(5);

    cout << "Linked List before reversing:\n";
    objL.display();
    cout << endl;

    cout << "Reversed Linked List:\n";
    objL.head = objL.reverseLinkedList(objL.head);
    objL.display();
    cout << endl;

    cout << "Reversed Linked List using Recursion:\n";
    objL.head = objL.recuReverseLinkedList(objL.head);
    objL.display();
    cout << endl;

    delete objL.head;
    return 0;
}