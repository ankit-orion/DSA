#include<iostream>
using namespace std;
class Hero{
    public:
    int health;

    char level = 'B';

    static int timeToComplete;
    // it cretes a dta member which belong to the class
    // to access this you don't need to create any object

    Hero(){
        cout <<"simple constructor"<< endl;
    }
    Hero(int health){
        this -> health = health;
    }
    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h, int pass){
        if(pass == 88182){
        health = h;
        }
    }
    void setLevel(char ch){
        level = ch;
    }
    // destructor is called by default but here we are creating it manually
    // the objects which are made statically desstructor is called automatically 
    // but for the dynamic allocated object we need to call the destructor manually
    ~Hero(){
        cout << "destructor bhai is called" << endl;
    }
    static int random(){
        return timeToComplete;
    }
};
int Hero:: timeToComplete = 10; //:: -> scope resolutio operator
int main(){
    //!static function
    // object ke through access nahi karna hota
    // this keyword nahi hota
    // can only access static member
    cout << "static function "<< Hero::random() << endl;

    //! static member
    cout << "accessing static member without using object: " << Hero:: timeToComplete << endl;
    //^ accessing static member
    //! Destrcutor -> used to free the memory
    // it doesn't have any return type, name is same as the class name
    //static
    // Hero a;
    // the destructor will be called automatically for the first time
    // Hero *b = new Hero;
    // for dynamic allocated object we are calling the destrcutor using delete keyword
    // delete b;

    //^ Copy assignment operator
    //^ -> suppose two objects are creted and you want to copy the data of second object to the fist one
    //^ then you can use copy assignment operator

    //? let the object one is a and second one is b
    //? then simple write a = b;



    //! constructor
    //^Copy constructor
    // in this we will copy object
    // Hero Suresh(70, 'c');
    // cout << "Sursh health: " << Suresh.health <<" Suresh level: "<< Suresh.level << endl;

    //^Here we have to create an object with same data so we can use copy constructor
    // Hero copied(Suresh);
    // cout << "Copied constrctor health: " << copied.health <<" Copied level: "<< copied.level << endl;
    // it is equivalent to saying copied.health = suresh.health and so on

    // these are called at the time of object creation
    // no return type
    // calling default constructor
    // Hero pankaj; // here the default constructor will be called 


    //^ parameterised constructor
    // Hero(int health){
        
    // }
    //! dynamic allocation
    // Hero *h2 = new Hero;
    // cout <<"Level is " <<(*h2).level << endl; // here are derefrencng
    // cout <<"health is "<< h2 -> getHealth();

    // creating a object
    //^ staatic allocation
    // Hero h1;
    // cout << "size "<< sizeof(h1) << endl;
    // here we are printing the size of the h1 object
    // as of now we have int stored in the class so we will get 4 bytes of storage

    //! but in case if there is no properties or in an empty class the space provided will be 1
    //^ it is provided just for the identification of the class

    //? To access data members we use dot operator: "."

    // cout << "Health is : "<< h1.health << endl;
    // cout << "Level is : "<< h1.level << endl;
    // There are three types of access modifers
    //1 -> Public -> can be accessed anywhere in the program
    //2 -> Private -> can be accessed only in the class
    //3 -> Protected -> can be access in the class and its child class

    // By default the class have private access modifier

    //! Getters and setters ->
    // setter
    // h1.setHealth(70, 88182);


    // these are ysued inc ase we have to access any provate
    // value then we can use these

    // cout <<"using getters to access health: Health is : " << h1.getHealth() << endl;

    // setter can be used to set condition for example we can provide passwords or obly specific users can make changes 

    // cout << "size of : "<< sizeof(h1); 

    return 0;
}
// class is a template and we are creating an object h1 