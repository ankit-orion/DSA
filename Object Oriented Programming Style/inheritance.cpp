#include<iostream>
using namespace std;
class Vehicle{
    public:
    string color;
    int speed;
};
class Car: public Vehicle{
    public:
    int gears;
    void print(){
        cout << "color -> " <<this->color << endl;
        cout << "speed -> " <<this->speed << endl;
        cout << "gears -> " <<this->gears << endl;
    }
};
class Bicycle: public Vehicle{
    public: 
    bool isFoldable;
    void print(){
        cout << "color -> " <<this->color << endl;
        cout << "speed -> " <<this->speed << endl;
        cout << "isFoldable -> " << (this->isFoldable ? "Foldable":"Not Foldable") << endl;
    }
};
class Truck: public Vehicle{
    public:
    int maxWeight;
        void print(){
        cout << "color -> " <<this->color << endl;
        cout << "speed -> " <<this->speed << endl;
        cout << "max Speed -> " <<this->maxWeight << endl;
    }
};
int main(){
    Car mycar;
    mycar.color = "yellow";
    mycar.speed = 200;
    mycar.gears = 5;
    mycar.print();

    Bicycle mybicycle;
    mybicycle.color = "white";
    mybicycle.speed = 300;
    mybicycle.isFoldable = false;
    mybicycle.print();

    Truck mytruck;
    mytruck.color = "Red";
    mytruck.speed = 500;
    mytruck.maxWeight = 1000;
    mytruck.print();
    return 0;

}
