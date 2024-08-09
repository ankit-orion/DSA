#include<iostream>
#include<queue>
#include<vector>
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
void printAtKLevel(TreeNode* root, int k){
    if(root == nullptr) return;
    if(k == 0) cout << root -> data <<" ";
    printAtKLevel(root -> left, k - 1);
    printAtKLevel(root -> right, k - 1);
}
int main(){
    // creating a binary tree
    TreeNode* root = new TreeNode(5);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(1);
    root -> left -> right = new TreeNode(10);
    root -> right -> left = new TreeNode(3);
    root -> right -> right = new TreeNode(4);
    root -> right -> left -> left = new TreeNode(8);
    root -> right -> left -> right = new TreeNode(11);
    cout << "enter the value of k "<< endl;
    int k;
    cin >> k;
    printAtKLevel(root, k);
}