#include<bits/stdc++.h>
using namespace std;

class Shape{
protected:
    double dim1;
    double dim2;
public:
    Shape(double d1, double d2){
        dim1 = d1;
        dim2 = d2;
    }

    virtual double calculateArea() const = 0;
    virtual void display() const = 0;

    virtual ~Shape() {}
};

class Rectangle : public Shape{
public:
    Rectangle(double length, double breadth) : Shape(length, breadth) {}

    double calculateArea() const override {
        return dim1 * dim2;
    }

    void display() const override {
        cout << "---Rectangle---\n";
        cout << "Length: " << dim1 << ", Breadth: " << dim2 << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect(10.0, 5.0);

    rect.display();

    return 0;
}