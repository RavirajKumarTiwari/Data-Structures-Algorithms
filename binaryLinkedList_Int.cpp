// Date: 06.07.2023
// CodingNinja Problem of the day

/*
Problem Statement: You are given a singly linked list containing 'n' nodes, where
every node in the linked list contains a pointer "next" which
points to the next node in the list and having values either 0 or
1. Your task is to return the decimal representation of the given
number in the linked list.
*/

// include all header files
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

int binaryToInteger(int n, Node* head) {
    int decimal = 0;
    while (head != NULL) {
        // left shift the decimal value by one bit and bitwise OR it with the current digit
        decimal = (decimal << 1) | head->data; // decimal = decimal * 2 + head->data;
        // move to the next node in the list
        head = head->next;
    }
    return decimal;
}

void display(Node* head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }


int main() {
    // Create a linked list with binary values
    Node* head = new Node(1);
    Node* node2 = new Node(0);
    Node* node3 = new Node(1);
    Node* node4 = new Node(1);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;

    // Display the linked list
    display(head);

    int decimal = binaryToInteger(4, head);
    cout <<"\n" << "Decimal representation: " << decimal << endl;

    delete head;
    return 0;
}
