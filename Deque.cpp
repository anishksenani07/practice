#include<bits/stdc++.h>
using namespace std;

class Deque{
private:
    static const int MAX = 5;
    int arr[MAX];
    int front;
    int rear;
public:
    Deque(){
        front = -1;
        rear = -1;
    }
    void insertFront(int x){
        if((front == 0 && rear == MAX - 1) || (front == rear + 1)){
            cout << "Deque Overflow!\n";
            return;
        }

        if(front == -1){
            front = 0;
            rear = 0;
        }
        else if(front == 0){
            front = MAX - 1;
        }
        else{
            front--;
        }

        arr[front] = x;
        cout << x << " inserted at front\n";
    }
    void insertRear(int x){
        if((front == 0 && rear == MAX - 1) || (front == rear + 1)){
            cout << "Deque Overflow\n";
            return;
        }
        
        if(front == -1){
            front = 0;
            rear = 0;
        }
        else if(rear == MAX - 1){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = x;
        cout << x << " inserted at rear\n";
    }
    void deleteFront(){
        if(front == -1){
            cout << "Deque Underflow\n";
            return;
        }
        cout << arr[front] << " deleted from front\n";

        if(front == rear){
            front = -1;
            rear = -1;
        }
        else if(front == MAX - 1){
            front = 0;
        }
        else{
            front++;
        }
    }
    void deleteRear(){
        if(front == -1){
            cout << "Deque Underflow\n";
            return;
        }
        cout << arr[rear] << " deleted from rear\n";

        if(front == rear){
            front = -1;
            rear = -1;
        }
        else if(rear == 0){
            rear = MAX - 1;
        }
        else{
            rear--;
        }
    }
    void display() const {
        if (front == -1) {
            cout << "Deque is empty\n";
            return;
        }

        cout << "Deque (Front -> Rear): ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        cout << "\n";
    }
};

/*
1. Input-Restricted Deque
In an input-restricted deque, 
insertion is allowed at only one end (Rear), 
but deletion is allowed at both ends (Front and Rear).
*/

/*
2. Output-Restricted Deque
In an output-restricted deque, 
deletion is allowed at only one end (Front), 
but insertion is allowed at both ends (Front and Rear).
*/

int main() {
    Deque dq;

    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);  // Goes to the end of circular array (arr[4])
    dq.insertRear(30);

    dq.display(); // 5 10 20 30

    dq.deleteFront(); // Removes 5
    dq.deleteRear();  // Removes 30

    dq.display(); // 10 20

    return 0;
}