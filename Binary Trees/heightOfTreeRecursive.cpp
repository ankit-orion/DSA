#include<iostream>
#include<queue>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode *left , *right;
    TreeNode(int data){
        this -> data = data;
        left = right = nullptr;
    }
};
int height(TreeNode* root){
    if(root == nullptr) return 0;
    return 1 + max(height(root -> left), height(root -> right));
}
int main(){
    // TreeNode *root = takeInput();
    TreeNode* root = new TreeNode(5);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(1);
    root -> left -> right = new TreeNode(10);
    root -> right -> left = new TreeNode(3);
    root -> right -> right = new TreeNode(4);
    root -> right -> left -> left = new TreeNode(8);
    root -> right -> left -> right = new TreeNode(11);
    cout << height(root);
}
