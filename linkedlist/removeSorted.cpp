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
void print(node *head){
  node *temp = head;
  while(temp!= NULL){
    cout << temp -> data << "->";
    temp = temp-> next;
  }
  cout<< "NULL\n";
}
node *removeElements(node *head){
  node *curr = head;
  while(curr && curr -> next){
    if(curr -> data == curr -> next -> data){
      node *temp = curr -> next;
      curr -> next = curr -> next -> next;
      delete(temp);
    }
    else
    curr = curr -> next;
  }
  return head;
}
int main(){
  node *head = new node(10);
  node *temp1 = new node(20);
  node *temp2 = new node(20);
  node *temp3 = new node(30);
  node *temp4 = new node(40);
  node *temp5 = new node(40);
  node *temp6 = new node(40);
  node *temp7 = new node(90);
  head-> next = temp1;
  temp1-> next = temp2;
  temp2 -> next = temp3;
  temp3 -> next = temp4;
  temp4-> next = temp5;
  temp5 -> next = temp6;
  temp6 -> next = temp7;
  head = removeElements(head);
  print(head);
}
