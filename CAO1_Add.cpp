#include<bits/stdc++.h>
using namespace std;

class Calculator{
private:
    string message;
    double n1;
    double n2;
public:
    void getInput(){
        cout << "Enter a message to display: ";
        getline(cin, message);

        cout << "Enter n1: ";
        cin >> n1;

        cout << "Enter n2: ";
        cin >> n2;
    }

    void display(){
        cout << "Message: " << message << endl;
        cout << "Sum: " << (n1 + n2) << endl;
    }
};

int main(){
    Calculator c;

    c.getInput();
    c.display();

    return 0;
}