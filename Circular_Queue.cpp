#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
private:
    static const int SIZE = 5;
    int arr[SIZE];
    int front;
    int rear;
public:
    CircularQueue(){
        front = -1;
        rear = -1;
    }
    void enqueue(int x){
        if((rear + 1) % SIZE == front){
            cout << "Queue Overflow!\n";
            return;
        }

        if(front == -1){
            front = 0;
            rear = 0;
        }
        else{
            rear = (rear + 1) % SIZE;
        }

        arr[rear] = x;
        cout << x << " enqueued\n";
    }
    
    void dequeue() {
        if(front == -1){
            cout << "Queue Underflow!\n";
            return;
        }
        cout << arr[front] << " dequeued\n";

        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front = (front + 1) % SIZE;
        }
    }

    void display() const {
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Circular Queue: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << "\n";
    }
};

int main() {
    CircularQueue cq;

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);

    cq.enqueue(60); // Overflow

    cq.display();

    cq.dequeue();
    cq.dequeue();

    cq.display();

    cq.enqueue(60);
    cq.enqueue(70);

    cq.display();

    return 0;
}