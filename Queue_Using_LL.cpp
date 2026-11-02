#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Queue{
private:
    Node* front;
    Node* rear;
public:
    Queue(){
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int x){
        Node* newNode = new Node(x);
        if(rear == nullptr){
            front = newNode;
            rear = newNode;
            cout << x << " enqueued\n";
            return;
        }
        
        rear->next = newNode;
        rear = newNode;
        cout << x << " enqueued\n";
    }

    void dequeue(){
        if(front == nullptr){
            cout << "Queue Underflow!\n";
            return;
        }
        Node* temp = front;
        cout << temp->data << " dequeued\n";
        front = front->next;

        if(front == nullptr){
            rear = nullptr;
        }
        delete temp;
    }

    void display() {
        if (front == nullptr) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue elements (Front -> Rear): ";
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.dequeue();

    q.display();

    return 0;
}