#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int data){
    //Linked List is empty
        if(head == NULL){
            head = new Node(data);
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next = new Node(data);
        return;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }

    void deleteAlternateNodes(){
        Node* currNode = head;
        while(currNode != NULL && currNode->next != NULL){
            Node* temp = currNode->next;
            currNode->next = currNode->next->next;
            free(temp);
            currNode = currNode->next;
        }
    }
};

int main(){
    LinkedList objL;
    objL.insertAtTail(1);
    objL.insertAtTail(2);
    objL.insertAtTail(3);
    objL.insertAtTail(4);
    objL.insertAtTail(5);
    objL.insertAtTail(6);
    objL.display();
    cout<<endl;
    objL.deleteAlternateNodes();
    objL.display();
}
