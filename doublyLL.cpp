#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this->data;

        // Memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout <<"Memory is free for node with data " << value << endl;
    }
};

// display doubly linked list
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

// find the lenght of doubly linked list
int getLength(Node* &head){
    Node* temp = head;
    int count = 0;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

// insert a node at head of doubly linked list
void insertAtHead(Node *&head, Node *&tail, int data){

    // for empty list
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }

    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// insert a node at tail of doubly linked list
void insertAtTail(Node *&tail, Node *&head, int data)
{

    // for empty list
    if (tail == NULL)
    {
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
        return;
    }

    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

// insert a node at any position of doubly linked list
void insertAtPos(Node* &head, Node* &tail, int data, int pos){

    // insert at start
    if(pos == 1){
        insertAtHead(head, tail, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }

    // insert at end
    if(temp->next == NULL){
        insertAtTail(tail, head, data);
        return;
    }

    // create a new node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;


}

// delete a node of doubly linked list
void deleteNode(Node* &head, Node* &tail, int pos){

    // deleting first node
    if(pos == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    // delete any node or last node
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt < pos){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    curr->prev = NULL;
    prev->next = curr->next;
    curr->next = NULL;

    delete curr;
}

int main(){

    // Node* node1 = new Node(10);
    
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 5);
    insertAtTail(tail, head, 15);
    insertAtPos(head, tail, 20, 1);

    print(head);
    int length = getLength(head);

    deleteNode(head, tail, 3);
    print(head);

    cout << "Head = " << head->data << endl;
    cout << "Tail = " << tail->data << endl;

    // for(int i = 1; i <= length; i++){
    //     deleteNode(head, tail, i);
    //     print(head);
        cout << "Length = " << getLength(head) << endl;
    // }
}