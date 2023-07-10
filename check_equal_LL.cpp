// You have given two Linked Lists, Tell if they are equal or not. Two Linked List are equal if they have 
// same data and arrangement of data is also the same.

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

    bool checkEqualLL(Node* head1, Node* head2){
        Node* ptr1 = head1;
        Node* ptr2 = head2;
        while(ptr1 != NULL && ptr2 != NULL){
            if(ptr1->data != ptr2->data){
                return false;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return (ptr1 == NULL && ptr2 == NULL);
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
    objLL2.insertAtTail(1);
    objLL2.insertAtTail(2);
    objLL2.insertAtTail(3);
    objLL2.insertAtTail(4);
    objLL2.insertAtTail(5);

    cout << "1st Linked List:\n";
    objLL1.display();
    cout << endl;

    cout << "2nd Linked List:\n";
    objLL2.display();
    cout << endl;

    cout << objLL1.checkEqualLL(objLL1.head, objLL2.head) << endl;

    delete objLL1.head;
    delete objLL2.head;
    return 0;
}