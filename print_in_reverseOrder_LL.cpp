// Print the linked list in reverse order using recursion. This is will not reverse the linked list, it will just print the linked list in reverse order.

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

    void printInReverseOrder(Node* head) {
        // Base case
        if (head == NULL) {
            return;
        }
        // Recursive call to print the linked list in reverse order
        printInReverseOrder(head->next); // when we call recursively, the function call is pushed onto the stack and the function call is popped from the stack when the function hit the return statement, then cout prints the linked list in reverse order (LIFO)
        // head->next->next = head;
        // head->next = NULL;
        cout << head->data << " ";
    }
};

// main function
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

    cout << "Printing Linked List in reverse order:\n";
    objL.printInReverseOrder(objL.head);
    cout << endl;

    delete objL.head;
    return 0;
}