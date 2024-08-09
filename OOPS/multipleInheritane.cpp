//^ Multiple Inheritance is a feature of C++ where a class can inherit from more than one class.
//i.e one subclass is inherited from more than one base class.
#include<iostream>
using namespace std;
class Vehicle { 
public: 
// default constrcutor
	Vehicle() 
	{ 
	cout << "This is a Vehicle\n"; 
	} 
}; 

// sub class derived from a single base classes 
class Car{ 
    public:
    int price;
    public:
    void name(){
        cout << "Name of the car is Tesla "<< endl;
    }
}; 
// Multiple inheritance
class Hybrid: public Vehicle, public Car{

};
int main() 
{ 
    Hybrid obj1;
    cout << obj1.price << endl;
    obj1.name();
	return 0; 
} 
