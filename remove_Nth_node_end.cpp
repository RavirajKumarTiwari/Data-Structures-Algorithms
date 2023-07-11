// LeetCode: https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

// Problem Statement: Given the head of a linked list, remove the nth node from the end of the list and return its head.

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

    void removeNthFromEnd(Node* head, int n) {
        Node* ptr1 = head;
        Node* ptr2 = head;
        int count = n;

        // Moving ptr2 by n step ahead
        while(count--){
            ptr2 = ptr2->next;
        }

        // n is equal to length of linked list
        if(ptr2 == NULL){
            // Delete head of linked list
            Node* temp = head;
            head = head->next;
            free(temp);
            return;
        }

        // Now ptr2 is n step ahead of ptr1 
        // When ptr2 is at NULL (end of LL) ptr1 will be node to be deleted

        while(ptr2->next != NULL){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        // Ptr1 is pointing to node before nth node from end
        // Node to be deleted is ptr1->next
        // cout << ptr1->data << endl;
        Node* temp = ptr1->next;
        ptr1->next = ptr1->next->next;
        free(temp);
    }
};


int main() {
    LinkedList objL;
    objL.insertAtTail(1);
    objL.insertAtTail(2);
    objL.insertAtTail(3);
    objL.insertAtTail(4);
    objL.insertAtTail(5);
    objL.insertAtTail(6);

    cout << "Linked List before removing:\n";
    objL.display();
    cout << endl;

    cout << "Linked List after removing:\n";
    objL.removeNthFromEnd(objL.head, 3);
    objL.display();
    cout << endl;

    delete objL.head;
    return 0;
}