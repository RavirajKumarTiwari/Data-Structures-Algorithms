// Given the head of two singly Linked List head A and head B return the node at which the two lists intersect.
// If the Linked List have no intersection at all return null.

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

    // Find the length of Linked List
    int getLength(Node* head){
        Node* temp = head;
        int length = 0;
        while(temp != NULL){
            temp = temp->next;
            length++;
        }
        return length;
    }

    Node* moveHeadbyK(Node* head, int k){
        Node* ptr = head;
        while(k--){
            ptr = ptr->next;
        }
        return ptr;
    }

    Node* getIntersection(Node* head1, Node* head2){
        // Step 1: Calculate length of both linked list
        int l1 = getLength(head1);
        int l2 = getLength(head2);

        Node* ptr1;
        Node* ptr2;

        // Step 2: Find the difference k between LinkedList and move longer LongerList by k step
        if(l1 > l2){ // LL1 is longer
            int k = l1 - l2;
            ptr1 = moveHeadbyK(head1, k);
            ptr2 = head2;
        }
        else{ // LL2 is longer
            int k = l2 - l1;
            ptr1 = head1;
            ptr2 = moveHeadbyK(head2, k);
        }

        // Step 3: Compare ptr1 and ptr2 nodes
        while(ptr1 != NULL){
            if(ptr1 == ptr2){
                return ptr1;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return NULL;
    }

};


int main() {
    LinkedList objLL1;
    objLL1.insertAtTail(1);
    objLL1.insertAtTail(2);
    objLL1.insertAtTail(3);
    objLL1.insertAtTail(4);
    objLL1.insertAtTail(5);

    LinkedList objLL2;
    objLL2.insertAtTail(6);
    objLL2.insertAtTail(7);
    objLL2.head->next->next = objLL1.head->next->next; //Intersection Point

    cout << "1st Linked List:\n";
    objLL1.display();
    cout << endl;

    cout << "2nd Linked List:\n";
    objLL2.display();
    cout << endl;

    Node* intersection = objLL1.getIntersection(objLL1.head, objLL2.head);
    if(intersection)
        cout <<"Intersection point: " << intersection->data <<endl;
    else
        cout <<"-1\n";

    delete objLL1.head;
    delete objLL2.head;
    return 0;
}