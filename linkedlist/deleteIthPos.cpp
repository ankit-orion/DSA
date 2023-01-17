#include<iostream>
using namespace std;
class node{
public:
  int data;
  node *next;
  node(int data){
    this-> data = data;
    this->next = NULL;
  }
};
void print(node *head){
  node *temp = head;
  while(temp != NULL){
    cout << temp ->data <<" ";
    temp = temp -> next;
  }
}
node *deleteI(node* head, int pos){
  if(pos < 1)
  return head;
  if(pos == 1){
    node *temp = head->next;
    delete(head);
    return temp;
  }
  node *curr = head;
  int count = 0;
  while(curr != NULL && count < pos - 2){
    curr = curr-> next;
    count++;
  }
  if(curr != NULL){
    node *a = curr->next;
    node *b = a->next;
    delete(a);
    curr->next = b;
    return head;
  }
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
  int pos;
  cin >> pos;
  head = deleteI(head, pos);
  print(head);
}
