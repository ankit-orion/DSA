#include<iostream>
using namespace std;
class node{
public:
  int data;
  node* next;
  node(int data){
    this -> data = data;
    this -> next = NULL;
  }
};
void print(node *head){
  node *temp= head;
  while(temp != NULL){
    cout << temp -> data <<" ";
    temp = temp -> next;
  }
}
node *deleteH(node *head){
  node *temp = head -> next;
  delete(head);
  return temp;
}
int main(){
  node n1(2);
  node *head = &n1;
  node n2(3);
  node n3(4);
  node n4(5);
  node n5(6);
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5;
  head = deleteH(head);
  print(head);
}
