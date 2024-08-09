//^There are 5 types of Inheritance
//! 1. Single Inheritance: In single inheritance, a class is allowed to inherit from only one class. 
// i.e. one subclass is inherited by one base class only

// 2. Multi-level Inheritance
// 3. Multiple Inheritance
// 4. Hybrid Inheritance
// 5. Hierarchical Inheritance
// C++ program to explain 
// Single inheritance 
#include<iostream> 
using namespace std; 

// base class 
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

// main function 
int main() 
{ 
	// Creating object of sub class will 
	// invoke the constructor of base classes 
	Car obj; 
	return 0; 
} 
