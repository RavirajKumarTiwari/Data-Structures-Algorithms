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

void insertNode(Node* &tail, int element, int d){
    
    // Empty List
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    // Non Empty List
    // assuming that the element is present in the list
    else{
        Node* curr = tail;

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

void print(Node* tail){
    Node* temp = tail;

    do{
        cout << tail->data << " ";
        tail = tail->next;
    }
    while(tail != temp);
    cout << endl;
}

void deleteNode()

int main()
{
    Node* tail = NULL;

    // inserting in empty list
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 9, 11);
    print(tail);

    insertNode(tail, 7, 20);
    print(tail);

    insertNode(tail, 3, 15);
    print(tail);

    return 0;
}