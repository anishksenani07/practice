#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* reverseDLL(Node* head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }
    Node* last = nullptr;
    Node* curr = head;

    while(curr != nullptr){
        last = curr->back;
        curr->back = curr->next;
        curr->next = last;
        curr = curr->back;
    }
    return last->back;
}

void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};

    Node* head = convertArr2DLL(arr);

    cout << "Original DLL:\n";
    print(head);

    head = reverseDLL(head);
    cout << "\nReversed DLL:\n";
    print(head);

    return 0;
}