// Singlely linked list

#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        // Constructor
        Node(int data){
            this->data = data;
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

void insertAtHead(Node* &head, int d){

    // New node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){

    // New node create
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    // Insert at Head
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    // Insert at Tail
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // Create a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp ->next;

    temp ->next = nodeToInsert;
}

// Traverse
void print(Node* &head){
    Node* temp = head;

    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout <<endl;
    
}

void deleteNode(int position, Node* &head){

    // Deleting fisrt or start node
    if(position == 1){
        Node* temp = head;
        head = head->next;

        // Memory free start node
        temp->next = NULL;
        delete temp;
    }
    else{
        // Deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    // Create a new node
    Node* node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // pointed to node1
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 4, 20);
    print(head);

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    deleteNode(4, head);

    return 0;
}