//^ Multilevel Inheritance: In this type of inheritance, a derived class is created from another derived class.
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
class Car : public Vehicle { 

}; 
class Tesla : public Car{
    public:
    Tesla(){
        cout <<"Vehicle name is Tesla" << endl;
    }
};

// main function 
int main() 
{ 
	// Creating object of sub class will 
	// invoke the constructor of base classes 
	Tesla first;
	return 0; 
} 