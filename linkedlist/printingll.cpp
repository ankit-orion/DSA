class node{
  int data;
  node *next;
  node(int data){
    this -> data = data;
    this -> next = NULL;
  }
};
void print(node *head){
  temp = head;
  while(temp != NULL){
    cout << temp ->data <<" "'
    temp = temp -> next;
  }
}
int main(){
  node n1(1);
  node *head = &n1;
  node n2(2);
  node n3(3);
  node n4(4);
  node n5(5);
  n1.next = &n2
  n2.next = &n3
  n3.next = &n4
  n4.next = &n5
  print(head);
}
