#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Stack{
private:
    Node* top;
public:
    Stack(){
        top = nullptr;
    }

    void push(int x){
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
        cout << x << " pushed\n";
    }

    void pop(){
        if(top == nullptr){
            cout << "Stack Underflow!\n";
            return;
        }
        Node* temp = top;
        cout << temp->data << " popped\n";
        top = top->next;
        delete temp;
    }

    void display(){
        if(top == nullptr){
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Stack Elements: ";
        Node* temp = top;
        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.pop();

    s.display();

    return 0;
}