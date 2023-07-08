// Reverse the Node of the linked List K at a time and return the modified Linked List

/*
Exmaple : Given Linked List = 1->2->3->4->5->6 ,K = 2
Output : 2->1->4->3->6->5
*/

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

    // Revere Linked List using Recursion
    Node* Reverse_k_Nodes(Node * head, int k){
        Node* prePtr = NULL;
        Node* currPtr = head;
        int count = 0; // for counting k nodes

        // Reversing 1st k nodes
        while(currPtr != NULL && count < k){
            Node* nextPtr = currPtr->next;
            currPtr->next = prePtr;
            
            prePtr = currPtr;
            currPtr = nextPtr;

            count++;
        }
        // currPtr will give us (k+1)th nodes
        if(currPtr != NULL){
            Node* newHead = Reverse_k_Nodes(currPtr, k); // Recursive call
            head->next = newHead;
        }
        return prePtr; // prePtr will give us the new Head of connected linked list
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

    cout << "Linked List before reversing:\n";
    objL.display();
    cout << endl;

    cout << "Reversed Linked List using Recursion:\n";
    objL.head = objL.Reverse_k_Nodes(objL.head, 2);
    objL.display();
    cout << endl;

    delete objL.head;
    return 0;
}