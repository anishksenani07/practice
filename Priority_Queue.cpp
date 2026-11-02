#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    int priority;
    Node* next;

    Node(int val, int p) {
        data = val;
        priority = p;
        next = nullptr;
    }
};

class PriorityQueue{
private:
    Node* head;
public:
    PriorityQueue(){
        head = nullptr;
    }
    void enqueue(int val, int p){
        Node* newNode = new Node(val, p);

        if(head == nullptr || p > head->priority){
            newNode->next = head;
            head = newNode;
            cout << val << " Priority: " << p << " enqueued\n";
            return;
        }
        Node* temp = head;
        while(temp->next != nullptr && temp->next->priority >= p){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;

        cout << val << " (Priority: " << p << ") enqueued\n";
    }

    void dequeue(){
        if(head == nullptr){
            cout << "Priority Queue Underflow!\n";
            return;
        }
        Node* temp = head;
        cout << temp->data << " (Priority: " << temp->priority << ") dequeued\n";
        head = head->next;
        delete temp;
    }

    void display() const {
        if (head == nullptr) {
            cout << "Priority Queue is empty\n";
            return;
        }

        cout << "Priority Queue [Value(Priority)]: ";
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << "(" << temp->priority << ") -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    PriorityQueue pq;

    pq.enqueue(10, 1); // low priority
    pq.enqueue(30, 3); // high priority
    pq.enqueue(20, 2); // medium priority
    pq.enqueue(40, 4); // highest priority

    cout << "\nQueue state:\n";
    pq.display();

    cout << "\nDequeuing elements:\n";
    pq.dequeue(); // Removes 40 (Priority 4)
    pq.dequeue(); // Removes 30 (Priority 3)
    cout << "\nRemaining Queue state:\n";
    pq.display();

    return 0;
}