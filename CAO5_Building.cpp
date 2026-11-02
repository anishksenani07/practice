#include<bits/stdc++.h>
using namespace std;

class Building{
protected:
    int floors;
    int rooms;
    float footage;
public:
    Building(int f, int r, float foot){
        floors = f;
        rooms = r;
        footage = foot;
    }
    void displayBuilding(){
        cout << "Floors: " << floors << endl;
        cout << "Rooms: " << rooms << endl;
        cout << "Footage: " << footage << endl;
    }
};

class House : public Building{
private:
    int bedrooms;
    int bathrooms;
public: 
    House(int f, int r, float foot, int bed, int bath) : Building(f, r, foot){
        bedrooms = bed;
        bathrooms = bath;
    }
    void displayHouse(){
        cout << "Bedrooms: " << bedrooms << endl;
        cout << "Bathrooms: " << bathrooms << endl;
    }
};

int main(){
    House myHouse(2, 6, 2400.5, 3, 2);

    myHouse.displayBuilding();
    myHouse.displayHouse();

    return 0;
}