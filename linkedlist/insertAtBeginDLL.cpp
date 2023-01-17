#include<iostream>
using namespace std;
class node{
public:
  int data;
  node *next;
  node *prev;
  node(int data){
    this -> data = data;
    this -> next = NULL;
    this -> prev = NULL;
  }
};
void print(node *head){
  node *temp = head;
  while(temp!= NULL){
    cout << temp -> data << "->";
    temp = temp-> next;
  }
  cout<< "NULL\n";
}
node *insert(node *head, int data){
  node *newNode = new node(data);
  newNode -> next = head;
  if(head != NULL){
    head->prev = newNode;
  }
  return newNode;
}
int main(){
  node *head = new node(10);
  node *temp1 = new node(20);
  node *temp2 = new node(30);
  head -> next = temp1;
  temp1 -> prev = head;
  temp1->next = temp2;
  temp2 -> prev = temp1;
  int k;
  cin >> k;
  head = insert(head, k);
  print(head);
}
