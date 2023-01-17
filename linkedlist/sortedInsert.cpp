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
void print(node *head){
  node *temp = head;
  while(temp!= NULL){
    cout << temp -> data << "->";
    temp = temp-> next;
  }
  cout<< "NULL\n";
}
node *insertSorted(node *head, int k){
  node *newNode = new node(k);
  if(head == nullptr){
    return newNode;
  }
  if(head -> data > k){
    newNode -> next = head;
    return newNode;
  }
  node *temp = head;
  while(temp -> next -> data < k && temp -> next != nullptr){
    temp = temp -> next;
  }
  newNode -> next = temp-> next;
  temp-> next = newNode;
  return head;
  }
int main(){
  node *head = new node(10);
  node *temp1 = new node(20);
  node *temp2 = new node(30);
  node *temp3 = new node(40);
  head -> next = temp1;
  temp1->next = temp2;
  temp2-> next = temp3;
  int k;
  cin >> k;
  head = insertSorted(head, k);
  print(head);
}
