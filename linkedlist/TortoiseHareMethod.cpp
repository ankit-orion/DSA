// finding mid point of ll using tortoise hare method
// time compelxity will be o(n)
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
void findMid(node *head){
  node *slow = head;
  node *fast = head;
  while(fast != nullptr && fast -> next != nullptr){
    // it can also be written as (fast && fast -> next)
    slow = slow -> next;
    fast = fast -> next -> next;
  }
  cout << slow -> data;
}
int main(){
  node *head = new node(10);
  node *temp1 = new node(20);
  node *temp2 = new node(30);
  node *temp3 = new node(40);
  node *temp4 = new node(50);
  node *temp5 = new node(60);
  head-> next = temp1;
  temp1-> next = temp2;
  temp2 -> next = temp3;
  temp3 -> next = temp4;
  temp4-> next = temp5;
  findMid(head);
}
