//^ The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. 
// To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). 
// If you want others to read or modify the value of a private member, you can provide public get and set methods.

// Access Private Members
// To access a private attribute, use public "get" and "set" methods:
//^ There are four pillars of oops
// 1. Encapsulation -> wrapping up data members and functions in a single entity
// this capsule is class
// Fully encapsulated class -> all data memebrs are private. No other class can access these properties or methods
//^ Why encapsulation :-> Information hiding/ Data hiding
//Adv: We can hide data using excapsulation using access modifers. Secuirty will increase
// if we want, we can make class -> Ready only(no setters)
//^ Why Encapsulation?
// It is considered good practice to declare your class attributes as private (as often as you can). 
// Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
// Increased security of data
#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    float height;

    public:
    void setValues(string name, int age, float height){
        this -> name = name;
        this -> age = age;
        this -> height= height;

    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    float getheight(){
        return height;
    }
};
int main(){
    Student first;
    first.setValues("Ankit Mishra", 21, 5.7);
    cout << "Name of the student is : " << first.getname() << endl;
    cout << "Age of the student is : "<< first.getage() << endl;
    cout << "Height of the student is : "<<first.getheight() << endl;
}
