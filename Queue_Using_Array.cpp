#include<bits/stdc++.h>
using namespace std;

class Queue {
private:
    static const int SIZE = 5;
    int arr[SIZE];
    int front;
    int rear;
public:
    Queue(){
        front = -1;
        rear = -1;
    }

    void enqueue(int x){
        if(rear == SIZE - 1){
            cout << "Queue Overflow!\n";
            return;
        }
        if(front == -1){
            front = 0;
        }
        rear++;
        arr[rear] = x;
        cout << x << " enqueued\n";
    }

    void dequeue(){
        if(front == -1 || front > rear){
            cout << "Queue Underflow!\n";
            return;
        }
        cout << arr[front] << " dequeued\n";
        front++;

        if(front > rear){
            front = -1;
            rear = -1;
        }
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements (Front -> Rear): ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
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