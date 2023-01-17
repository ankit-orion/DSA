#include<iostream>
using namespace std;
class node{
public:
  int data;
  node *next;
  node(int data){
    this-> data = data;
    this-> next = NULL;
  }
};
int main(){
  node n1(1);
  node *head = &n1;
  node n2(2);
  n1.next = &n2;
  cout << n1.data <<" " << n2.data <<" ";
  // dynamically
  node *n3 = new node(3);
  node *temp = n3;
  node *n4 = new node(4);
  n3 -> next = n4;
  cout << n3 -> data <<" " << n4 -> data;
}
