#include<bits/stdc++.h>
using namespace std;

class Rectangle{
protected: 
    float length;
    float breadth;
public:
    Rectangle(float l, float b){
        length = l;
        breadth = b;
    }
    float getArea(){
        return length * breadth;
    }
};

class Height{
protected:
    float height;
public: 
    Height(float h){
        height = h;
    }
    float getHeight(){
        return height;
    }
};

class Cuboid : public Rectangle, public Height{
public: 
    Cuboid(float l, float b, float h) : Rectangle(l, b), Height(h) {}

    float getVolume(){
        return getArea() * height;
    }

    void display(){
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Height: " << height << endl;
        cout << "Volume of Cuboid: " << getVolume() << endl;
    }
};

int main(){
    float l, b, h;

    cout << "Enter length, breadth and height: ";
    cin >> l >> b >> h;

    Cuboid c(l, b, h);
    c.getVolume();
    c.display();

    return 0;
}