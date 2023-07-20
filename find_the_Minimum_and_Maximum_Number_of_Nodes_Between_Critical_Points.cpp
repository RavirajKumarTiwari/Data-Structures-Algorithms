// A critical point in a linked list is defined as either a local maxima or a local minima.
// A node is a local maxima if the current node has a value strictly greater than the previous node and the next node.
// A node is a local minima if the current node has a value strictly smaller than the previous node and the next node.
// Note that a node can only be a local maxima/minima if there exists both a previous node and a next node.

#include <bits/stdc++.h>
using namespace std;

// Doubly Linked List
struct Node {
    int data;
    Node *prev, *next;
    Node(int value) {
        data = value;
        prev = next = NULL;
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

    // Distance between Critical Points
    vector<int> disBetweenCriticalPoints(Node* head, Node* tail){

        vector<int> ans(2, INT_MAX);
        int firstCP = -1, lastCP = -1;

        Node* currNode = tail->prev;
        if(currNode == NULL){
            ans[0] = ans[1] = -1;
            return ans;
        }

        int currPos = 0;
        while(currNode->prev != NULL){
            if(isCriticalPoint(currNode)){
                if(firstCP == -1){
                    firstCP = lastCP = currPos;
                }
                else{
                    ans[0] = min(ans[0], currPos - lastCP); // Min Distance
                    ans[1] = currPos - firstCP; // Max Distance
                    lastCP = currPos;
                }
            }
            currPos++;
            currNode = currNode->prev;
        }
        if(ans[0] == INT_MAX){
            ans[0] = ans[1] = -1;
        }
        return ans;
    }
};

int main(){
    DoublyLinkedList dll;

    dll.insertAtTail(1);
    dll.insertAtTail(5);
    dll.insertAtTail(2);
    dll.insertAtTail(6);
    dll.insertAtTail(3);

    dll.print(dll.head);

    vector<int> ans = dll.disBetweenCriticalPoints(dll.head, dll.tail);
    cout << "Min Distance: " << ans[0] << "\n";
    cout << "Max Distance: " << ans[1] << "\n";

    return 0;
}