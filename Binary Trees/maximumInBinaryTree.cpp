#include<iostream>
#include<stack>
#include<cmath>
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
int maxInBinaryTree(TreeNode *root){
    if(root == nullptr) return 0;
    return max(maxInBinaryTree(root -> left), maxInBinaryTree(root -> right));
}
int main(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->right->left = new TreeNode(8);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->right->right->left = new TreeNode(9);
    root->right->right->right = new TreeNode(10);
    int maxValue = maxInBinaryTree(root);
    cout << maxValue;

}