#include<iostream>
using namespace std;
class Hero{
    private:
    int health;

    public:
    char level;

    Hero(){
        cout <<"Simple constrcutor called"<<endl;
    }
    void print(){
        cout <<"health -> "<< this->health << endl;
        cout <<"level -> "<< this->level << endl;;
    }
    //copy constructor
    Hero(Hero temp){
        this -> health = temp.health;
        this -> level = temp.level
    }
    //parameterized construtor
    Hero(int health){
        this -> health = health;
    }
    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }
    int hetHealth(){
        return health;
    }
    void setHealth(int health){
        this -> health = health;
    }
};
int main(){
    // parameterized constructor
    Hero R(20, 'A');

    //Copy constructor
    Hero S(R);
    S.print();
    cout << "Copy constructor" << endl;
    cout<< endl;
    R.print();
    return 0;
}