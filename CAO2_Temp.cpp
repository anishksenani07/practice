#include<bits/stdc++.h>
using namespace std;

class TempConverter{
private:
    double temp;
public:
    TempConverter(float f){
        temp = f;
    }
    void toCelsius(){
        float c = (temp - 32) * 5.0 / 9.0; 
        cout << "Temperature in celsius: "<< c;
    }
};

int main(){
    double t;
    cout << "Enter a temp in fahrenheit: "<< endl;
    cin >> t;

    TempConverter obj(t);
    obj.toCelsius();

    return 0;
}