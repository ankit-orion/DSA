#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next = nullptr;
    node(int data){
        this -> data = data;
        this -> next = nullptr;
    }
};
class mystack{
    public:
    node *head;
    int size;
    mystack(){
        head = nullptr;
        size = 0;
    }
    void stackPush(int x){
        node *element = new node(x);
        element -> next = head;
        head = element;
        cout <<"Element pushed" << endl;
        size++;
    }
    int stackPop(){
        if(head == nullptr) 
        return -1;

        int topData = head -> data;
        node *temp = head;
        head = head -> next;
        delete temp;
        size--;
        return topData;
    }
    int stackSize(){
        return size;
    }
    bool stackIsEmpty(){
        return head == nullptr;
    }
    int stackPeek(){
        if(head == nullptr){
        return -1;
        }        
        return head -> data; 
    }
    void printStack(){
        node *curr = head;
        while(curr != nullptr){
            cout << curr -> data;
            curr = curr -> next;
        }
    }
};
int main(){
    mystack s;
    s.stackPush(20);
    s.stackPush(30);
    s.stackPush(40);
    cout <<"Popped Element " << s.stackPop() << endl;
    cout << "Stack size "<< s.stackSize() << endl;
    cout <<"Stack empty or not " << s.stackIsEmpty() << endl;
    cout << "stack's top element "<< s.stackPeek() << endl;
    return 0;
}