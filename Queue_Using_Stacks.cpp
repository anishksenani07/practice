#include<bits/stdc++.h>
using namespace std;

class MyQueue{
private:
    stack<int> s1;
    stack<int> s2;
public:
    void enqueue(int x){
        s1.push(x);
        cout << x << " enqueued\n";
    }
    void dequeue(){
        if(s1.empty() && s2.empty()){
            cout << "Queue Underflow!\n";
            return;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << s2.top() << " dequeued\n";
        s2.pop();
    }
    void display(){
        if(s1.empty() && s2.empty()){
            cout << "Queue is Empty\n";
            return;
        }
        stack<int> tempS1 = s1;
        stack<int> tempS2 = s2;

        cout << "Queue Elements (Front -> Rear): ";
        while(!tempS2.empty()){
            cout << tempS2.top() << " ";
            tempS2.pop();
        }

        stack<int> helper;
        while(!tempS1.empty()){
            helper.push(tempS1.top());
            tempS1.pop();
        }
        
        while(!helper.empty()){
            cout << helper.top() << " ";
            helper.pop();
        }

        cout << endl;
    }
};

int main() {
    MyQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();
    q.dequeue(); // 10
    q.dequeue(); // 20
    q.enqueue(40);

    q.dequeue(); // 30
    q.dequeue(); // 40
    q.display();
    q.dequeue(); // Underflow

    return 0;
}