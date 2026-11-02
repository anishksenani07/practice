#include<bits/stdc++.h>
using namespace std;

class Vehicle{
protected:
    int wheels;
    double speed;
public:
    Vehicle(int w, double s){
        wheels = w;
        speed = s;
    }
    void display(){
        cout << "Wheels: " << wheels << endl;
        cout << "Speed: " << speed << "km/h" << endl;
    }
    double getSpeed(){
        return speed;
    }
};

class Car : public Vehicle{
private:
    int passengers;
public:
    Car(int w, double s, int p) : Vehicle(w, s){
        passengers = p;
    }
    void displayCar(){
        cout << "--- Car Details ---\n";
        display();
        cout << "Passenger Capacity: " << passengers << endl;
    }
};

class Truck : public Vehicle{
private:
    double load;
public: 
    Truck(int w, double s, double l) : Vehicle(w, s){
        load = l;
    }
    void displayTruck(){
        cout << "--- Truck Details ---\n";
        display();
        cout << "Load Limit: " << load << "tons" << endl;
    }
};

int main(){
    Car myCar(4, 100.2, 5);
    Truck myTruck(6, 90.8, 15.0);

    myCar.displayCar();
    myTruck.displayTruck();

    cout << "--- Speed Comparison ---\n";
    if(myCar.getSpeed() == myTruck.getSpeed()){
        cout << "Both vehicles are running at the same speed \n";
    }
    else if(myCar.getSpeed() > myTruck.getSpeed()){
        cout << "Car is faster\n";
    }
    else{
        cout << "Truck is faster\n";
    }

    return 0;
}