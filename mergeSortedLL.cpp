// LeetCode (1): https://leetcode.com/problems/merge-two-sorted-lists/ 
// LeetCode (2): https://leetcode.com/problems/merge-k-sorted-lists/

// Problem Statement (1): Given 2 sorted LinkedList merge them into 1 singly Linked List such that the resulting list is also sorted

/* Problem Statement (2): You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
Merge all the linked-lists into one sorted linked-list and return it. */

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

// Given 2 sorted LinkedList merge them into 1 singly Linked List such that the resulting list is also sorted
    Node* merge_2_SortedLinkedList(Node* &head1, Node* &head2){

        Node* dummyHeadNode = new Node(-1);

        Node* ptr1 = head1;
        Node* ptr2 = head2;
        Node* ptr3 = dummyHeadNode;

        while(ptr1 != NULL && ptr2 != NULL){
            if(ptr1->data < ptr2->data){
                ptr3->next = ptr1;
                ptr1 = ptr1->next;
            }
            else{
                ptr3->next = ptr2;
                ptr2 = ptr2->next;
            }
            ptr3 = ptr3->next;
        }

        if(ptr1 != NULL){
            ptr3->next = ptr1;
        }
        else{
            ptr3->next = ptr2;
        }
        return dummyHeadNode->next;
    }

/* Problem Statement (2): You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
Merge all the linked-lists into one sorted linked-list and return it. */
    Node* merge_K_SortedLinkedList(vector<Node*> &lists){
        if(lists.size() == 0){
            return NULL;
        }

        while(lists.size() > 1){
            Node* mergeHead = merge_2_SortedLinkedList(lists[0], lists[1]);
            lists.push_back(mergeHead);
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return lists[0];
    }
};

int main(){
    LinkedList objL1;
    objL1.insertAtTail(1);
    objL1.insertAtTail(7);
    objL1.insertAtTail(8);

    cout << "1st Linked List:\n";
    objL1.display();
    cout << endl;

    LinkedList objL2;
    objL2.insertAtTail(2);
    objL2.insertAtTail(4);
    objL2.insertAtTail(5);

    cout << "2nd Linked List:\n";
    objL2.display();
    cout << endl;

    LinkedList objL3;
    objL3.insertAtTail(3);
    objL3.insertAtTail(6);

    cout << "3rd Linked List:\n";
    objL3.display();
    cout << endl;

    vector<Node*> lists;
    lists.push_back(objL1.head);
    lists.push_back(objL2.head);
    lists.push_back(objL3.head);

    LinkedList mergedLL;
    mergedLL.head = mergedLL.merge_K_SortedLinkedList(lists);
    cout << "Merged Linked List:\n";
    mergedLL.display();
    cout << endl;

    delete objL1.head;
    delete objL2.head;
    delete objL3.head;
    return 0;
}