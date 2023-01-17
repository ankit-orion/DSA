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
  node *temp = head;
  int count = 0;
  if(head == nullptr) cout << nullptr;
  if(head -> next == nullptr) cout << head -> data;
  while(temp != NULL){
    temp = temp -> next;
    count++;
  }
  temp = head;
  for(int i = 0; i < count/2; i++){
    temp = temp -> next;
  }
  cout << temp -> data;
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
