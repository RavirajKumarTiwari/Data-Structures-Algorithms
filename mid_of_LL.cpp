// LeetCode: https://leetcode.com/problems/middle-of-the-linked-list/description/
// CodingNinja: https://www.codingninjas.com/studio/problems/middle-of-linked-list_973250?leftPanelTab=1

/*
Problem Statement: Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.
*/

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        // Constructor
        Node(int val){
            this->data = val;
            next = NULL;
        }
        
        ~Node(){
            if(next == NULL){
                delete next;
            }
        }
};

class LinkedList{
    public:
        Node* head;

        LinkedList(){
            head = NULL;
        }

    void insertAtTail(int data){
        if(head == NULL){
            head = new Node(data);
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
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

    Node* findMiddleNode(Node *head) {
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL&& fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

int main(){
    LinkedList obj;
    obj.insertAtTail(1);
    obj.insertAtTail(7);
    obj.insertAtTail(8);
    obj.insertAtTail(10);
    obj.insertAtTail(11);

    cout << "Linked List:\n";
    obj.display();
    cout << endl;

    Node* middleNode;
    middleNode = obj.findMiddleNode(obj.head);
    cout <<"Middle Node: " << middleNode->data;

    delete obj.head;
    return 0;
}