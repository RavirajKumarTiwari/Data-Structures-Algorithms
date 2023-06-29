#include <iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
    
    // Constructor
    Node(int data){
        this->value = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int value){
    Node* temp = new Node(value); // Create a new node
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int value){
    Node* temp = new Node(value); // Create a new node
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int value){
    if(position == 1){
        insertAtHead(head, value);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, value);
        return;
    }

    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
}

void updateValueAtPos(Node* &head, int position, int vlaue){
    Node* temp = head;
    int count = 1;

    while (count != position){
        temp = temp->next;
        count++;
    }

    temp->value = vlaue;
    
}

void deleteNode(Node* &head, Node* &tail, int position){
    //Deleting first node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        free(temp); //clear memory
    }
    // deleting kth or last node
    else{
        Node* curr = head;
        Node* prev = NULL;

        int count;
        for(count = 1; count < position; count++){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        free(curr);
        tail = prev;
    }
}

void display(Node* head){
    Node* temp = head;

    while (temp != NULL){
        cout << temp->value << "\t";
        temp = temp->next;
    }
    cout << "\n";
}

int main() 
{
    Node* node1 = new Node(10);
    // cout << node1->value << endl;
    // cout<< node1->next << endl;

    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head,20);
    // display(head);

    
    insertAtHead(head,21);
    // display(head);

    
    insertAtHead(head,22);
    display(head);

    insertAtTail(tail,30);
    cout<<"Insertion at tail\n";
    display(head);

    insertAtPosition(head, tail, 4, 50);
    cout<<"Insertion at 4\n";
    display(head);

    updateValueAtPos(head, 4, 19);
    updateValueAtPos(head, 5, 18);
    updateValueAtPos(head, 6, 17);
    cout<<"After Update\n";
    display(head);

    deleteNode(head, tail, 6);
    deleteNode(head, tail, 5);
    // cout<<"Delete kth node\n";
    // display(head);

    // deleteTail(head, tail);
    cout<<"Delete kth node\n";
    display(head);
    cout << "Head " << head->value << endl;
    cout << "Tail " << tail->value << endl;


    return 0;
}