// given the head o fa doubly linked list. The values of the linked list are sorted in non-decreasing order. Find if there exists a pair of distinct nodes such that the sum of their values is x. Return the pair in the pointers. If there are multiple such pairs, return any of them. If there is no such pair return [-1, -1]. coding ninja

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        // Constructor
        Node(int val){
            this->data = val;
            prev = NULL;
            next = NULL;
        }
        
        ~Node(){
            if(next == NULL){
                delete next;
            }
        }
};

class DoublyLinkedList{
    public:
        Node* head;
        Node* tail;

        DoublyLinkedList(){
            head = NULL;
            tail = NULL;
        }
    // display doubly linked list
    void print(Node* &head){
        Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
    }

    // insert a node at tail of doubly linked list
    void insertAtTail(int data)
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

    // Find the Critical Points
    bool isCriticalPoint(Node* &currNode){
        // Local Maxima
        if(currNode->prev->data < currNode->data && currNode->next->data < currNode->data){
            return true;
        }

        // Local Minima
        if(currNode->prev->data > currNode->data && currNode->next->data > currNode->data){
            return true;
        }

        return false;
    }

    vector<int> pairSum(Node* head, Node* tail, int x){
        vector<int> ans(2, -1);

        while(head != tail){
            int sum = head->data + tail->data;
            if(sum == x){
                ans[0] = head->data;
                ans[1] = tail->data;
                return ans;
            }

            if(sum > x){
                tail = tail->prev;
            }
            else{
                head = head->next;
            }
        }
        return ans;
    }
};

int main(){
    DoublyLinkedList dll;

    dll.insertAtTail(1);
    dll.insertAtTail(5);
    dll.insertAtTail(12);
    dll.insertAtTail(16);
    dll.insertAtTail(30);

    dll.print(dll.head);

    vector<int> ans = dll.pairSum(dll.head, dll.tail, 21);
    cout << "Min Distance: " << ans[0] << "\n";
    cout << "Max Distance: " << ans[1] << "\n";

    return 0;
}