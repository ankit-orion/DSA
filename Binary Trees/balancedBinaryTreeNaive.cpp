#include<iostream>
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
bool check(TreeNode* root){
    if(root == nullptr) return true;
    int LH = height(root -> left);
    int RH = height(root -> right);
    if(abs(RH - LH) > 1) return false;
    bool left = check(root -> left);
    bool right = check(root -> right);
    if(!left || !right) return false;
    return true;
}
int main(){
    TreeNode *root = new TreeNode(4);
    root -> left = new TreeNode(7);
    root -> right = new TreeNode(8);
    root -> right -> left = new TreeNode(1);
    root -> right -> right = new TreeNode(0);
    // root -> left -> left -> left = new TreeNode(3);
    // root -> left -> left -> right = new TreeNode(5);
    cout << check(root);
}