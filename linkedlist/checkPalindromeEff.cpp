#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
bool checkPalindrome(node *head){
    
}
node *push(node *head, int data){
    node *newNode = new node(data);
    newNode -> next = head;
    head = newNode;
    return head;
}
int main(){
    node *llist = NULL;
    llist = push(llist, 10);
    llist = push(llist, 10);
    llist = push(llist, 50);
    llist = push(llist, 10);    
    llist = push(llist, 10);    
    checkPalindrome  ? cout << "true" :cout << "false";

}