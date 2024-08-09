//^ The capability of a class to derive properties and characteristics from another class is called Inheritance. 
// Inheritance is one of the most important features of Object-Oriented Programming. 

// Inheritance is a feature or a process in which, new classes are created from the existing classes. 
// The new class created is called “derived class” or “child class” and the existing class 
// is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.
//! Syntax:
// class parent_class{
    // body of the parent class
//};
// class child_class : access_modifier parent class{
    //body of the child class
//};

//^ Modes of Inheritance:->
//~ 1. Public Mode :-> 
// If we derive a subclass from a public base class. Then the base class's public members will
// becoeme public in the derived class, and protected class members will become protected in the derived class.

//~ 2. Protected Mode :-> 
// If we derive a subclass from a protected base class. Then both public members and protected
// members of the base class will become protected in the derived class.

//~ 3. Private Mode :-> 
// If we derive a subclass from a private base class. Then both public memebrs and protected
// members of the base class will become private in the derived class.

#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this -> weight = w;
    }
};
//!Imp :-> private data member of super class cannot be inherited
class Male : public Human{
    // these are some of the extra features added in the child clas

    public:
    string color;
    void sleep(){
        cout <<"Male is sleeping "<< endl;
    }
};
int main(){
    Male object1;
    cout << object1.age << endl;
    cout << object1.color<< endl;
    cout << object1.weight << endl;
    cout  << object1.height << endl;
    object1.sleep();
    return 0;
}