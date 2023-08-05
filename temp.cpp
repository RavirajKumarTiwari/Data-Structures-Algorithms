//Singly linked list
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;

    if(head == NULL){
        head = temp;
    }
    else{
        Node* temp1 = head;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

void print(){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;
}

Node* reverse(int k){

}

int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();
    Node* ans = reverse(2);
    // print();
    return 0;
}