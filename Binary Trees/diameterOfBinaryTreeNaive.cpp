#include<bits/stdc++.h>
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
int diameter(TreeNode* root, int *dia){
    if(root == nullptr) return 0;
    int LH = height(root -> left);
    int RH = height(root -> right);
    *dia = max(*dia, LH + RH);
    diameter(root -> left, dia);
    diameter(root -> right, dia);
    return *dia;
}
int main(){
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(7);
    root->right = new TreeNode(8);
    root-> right -> left = new TreeNode(1);
    root-> right -> left -> left = new TreeNode(3);
    root-> right -> left -> left -> left = new TreeNode(5);
    root-> right -> right = new TreeNode(0);
    root-> right -> right -> left = new TreeNode(2);
    root-> right -> right -> left -> left = new TreeNode(0);
    root-> right -> right -> right = new TreeNode(11);
    int dia = 0;
    cout << diameter(root, &dia);
}