#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;

        // Memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

class DoublyLinkedList
{
    public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
// display doubly linked list
    void print(Node *&head)
    {
        Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
    }

// find the lenght of doubly linked list
    int getLength(Node *&head)
    {
        Node *temp = head;
        int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
    }
// insert a node at head of doubly linked list
    void insertAtHead(Node *&head, Node *&tail, int data)
    {

        // for empty list
        Node *new_node = new Node(data);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }

    // insert a node at tail of doubly linked list
    void insertAtTail(Node *&tail, Node *&head, int data)
    {
        Node *new_node = new Node(data);

        // for empty list
        if (tail == NULL)
        {
            tail = new_node;
            head = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    // insert a node at any position of doubly linked list
    void insertAtPos(Node *&head, Node *&tail, int data, int pos)
    {

        // insert at start
        if (pos == 1)
        {
            insertAtHead(head, tail, data);
            return;
        }

        Node *temp = head;
        int cnt = 1;
        while (cnt < pos - 1)
        {
            temp = temp->next;
            cnt++;
        }

        // insert at end
        if (temp->next == NULL)
        {
            insertAtTail(tail, head, data);
            return;
        }

        // create a new node for data
        Node *nodeToInsert = new Node(data);

        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;

        nodeToInsert->prev = temp;
        temp->next->prev = nodeToInsert;
    }

    // delete a node of doubly linked list
    void deleteNode(Node *&head, Node *&tail, int pos)
    {
        //if your linked list is empty
        if(head == NULL){
            return;
        }

        // deleting first node
        if (pos == 1)
        {
            Node *temp = head;
            temp->next->prev = NULL;
            head = temp->next;
            temp->next = NULL;
            delete temp;
            return;
        }

        // delete any node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        // tail = tail->prev;
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
};

int main()
{
    DoublyLinkedList dll;
    dll.insertAtHead(dll.head, dll.tail, 5);
    dll.insertAtTail(dll.tail, dll.head, 15);
    dll.insertAtTail(dll.tail, dll.head, 25);
    dll.insertAtPos(dll.head, dll.tail, 20, 1);

    dll.print(dll.head);
    int length = dll.getLength(dll.head);

    dll.deleteNode(dll.head, dll.tail, 3);
    dll.print(dll.head);

    cout << "Head = " << dll.head->data << endl;
    cout << "Tail = " << dll.tail->data << endl;


    // for(int i = 1; i <= length; i++){
    //     dll.deleteNode(dll.head, dll.tail, i);
    //     dll.print(dll.head);
    cout << "Length = " << dll.getLength(dll.head) << endl;
    // }
}