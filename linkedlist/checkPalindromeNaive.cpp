#include<iostream>
#include<vector>
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
node *push(node *head, int data){
    node *newNode = new node(data);
    newNode -> next = head;
    head = newNode;
    return head;
}
bool checkPalindromeInArray(vector<int> vec, int n){
        int flag = 1;
    for (int i = 0; i <= n / 2 && n != 0; i++) {
        if (vec[i] != vec[n - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        return true;
    else
        return false;
}
bool checkPalindrome(node *head){
    vector<int> vec;
    node *temp = head;
    while(temp != NULL){
        vec.push_back(temp -> data);
        temp = temp -> next;
    }
    int n = vec.size();
    bool ans = checkPalindromeInArray(vec, n);
    return ans;
}
int main(){
    node *llist = NULL;
    llist = push(llist, 10);
    llist = push(llist, 10);
    llist = push(llist, 20);
    llist = push(llist, 10);
    llist = push(llist, 10);
    cout << checkPalindrome(llist);
    return 0;

}