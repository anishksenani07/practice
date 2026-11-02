#include<bits/stdc++.h>
using namespace std;

class Shape{
protected: 
    float length;
    float breadth;
public: 
    Shape(float l, float b){
        length = l;
        breadth = b;
    }
    void display(){
        cout << "Length: " << length << endl;
        cout << "Breadth: "<< breadth << endl;
    }
};

class Rectangle: public Shape{
public: 
    Rectangle(float l, float b) : Shape(l, b) {}

    void getArea(){
        float area = length * breadth;
        cout << "Area of the rectangle is: " << area << endl;
    }

    void getPerimeter(){
        float perimeter = 2.0 * (length + breadth);
        cout << "Perimeter of the rectangle is: " << perimeter << endl;
    }
};

int main(){
    float l, b;
    cout << "Enter length and breadth of the Rectangle: ";
    cin >> l >> b;

    Rectangle r(l, b);
    r.display();
    r.getArea();
    r.getPerimeter();

    return 0;
}