#include<bits/stdc++.h>
using namespace std;

class Stack {
private:
    static const int SIZE = 5;
    int arr[SIZE];
    int top;
public:
    Stack(){
        top = -1;
    }

    void push(int x){
        if(top == SIZE - 1){
            cout << "Stack Overflow!\n";
            return;
        }
        top++;
        arr[top] = x;
        cout << x << " pushed\n";
    }

    void pop(){
        if(top == -1){
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top] << " popped\n";
        top--;
    }

    void display(){
        if(top == -1){
            cout << "Stack Is Empty\n";
            return;
        }
        cout << "Stack elements (Top to Bottom): ";
        for(int i = top; i >= 0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();

    s.display();

    return 0;
}