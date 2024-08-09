#include<iostream>
#include<stack>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode *left, *right;
    TreeNode(int data){
        this -> data = data;
        left = right = nullptr;
    }
};
void preorder(TreeNode *root){
    stack<TreeNode* >s;
    s.push(root);
    while(!s.empty()){
        TreeNode *temp = s.top();
        s.pop();
        cout << temp -> data <<" ";
        if(temp -> left != nullptr) s.push(temp -> right);
        if(temp -> right != nullptr) s.push(temp -> left);
    }
}
int main(){
    TreeNode *root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(7);
    root -> left -> left = new TreeNode(3);
    root -> left -> right = new TreeNode(4);
    root -> left -> right -> left = new TreeNode(5);
    root -> left -> right -> right = new TreeNode(6);
    preorder(root);
}