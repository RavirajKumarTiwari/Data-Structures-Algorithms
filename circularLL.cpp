// Circular Singely linked list

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // Constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node* &head, int element, int d){
    
    // Empty List
    if(head == NULL){
        Node* newNode = new Node(d);
        head = newNode;
        newNode->next = newNode;
    }

    // Non Empty List
    // assuming that the element is present in the list
    else{
        Node* curr = head;

        // check if the element is present in the list or not
        while(curr->data != element){
            curr = curr->next;
        }
        // element found -> curr is representing the element wala node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* head){
    Node* temp = head;

    do{
        cout << head->data << " ";
        head = head->next;
    }
    while(head != temp);
    cout << endl;
}

void deleteHeadNode(Node* &head){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    Node* tail = head;
    while(tail->next != head){
        tail = tail->next;
    }
    head = head->next;
    tail->next = head;
    free(temp);
}
void deleteTailNode(Node* &head){
    if(head == NULL){
        return;
    }
    Node* tail = head;
    while(tail->next->next != head){
        tail = tail->next;
    }
    // here tail is representing the second last node
    Node* temp = temp->next;
    tail->next = head;
    free(temp);
}

void deleteK_th_Node(Node* &head, int position){

    if(position == 1){
        deleteHeadNode(head);
        return;
    }
    Node* curr = head;
    Node* prev = NULL;

    int count;
    for(count = 1; count < position; count++){
        prev = curr;
        curr = curr->next;
    }
    // cout<<"curr->data"<< curr->data << endl;
    prev->next = curr->next;
    free(curr);
}

bool isCircularList(Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }
    if(temp == head){
        return true;
    }
    return false;
}

int main()
{
    Node* head = NULL;

    // inserting in empty list
    insertNode(head, 5, 3);
    print(head);

    insertNode(head, 3, 5);
    print(head);

    insertNode(head, 5, 7);
    print(head);

    insertNode(head, 7, 9);
    print(head);

    insertNode(head, 9, 11);
    print(head);

    insertNode(head, 7, 20);
    print(head);

    insertNode(head, 3, 15);
    print(head);

    // deleteHeadNode(head);
    // print(head);

    // deleteTailNode(head);
    // print(head);

    deleteK_th_Node(head, 1);
    print(head);

    if(isCircularList(head)){
        cout << "Yes, it is a circular list" << endl;
    }
    else{
        cout << "No, it is not a circular list" << endl;
    }

    cout<<"head->data"<< head->data << endl;

    return 0;
}