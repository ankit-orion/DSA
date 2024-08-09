/*
deletein bst ->
problem statement -> you will be given a node 
and after deletion the bst should be rearranged in bst it shuld follow the property of 
bst that is L < N < R
there are tow ways you can do 
1. you can eitehr cut out the right portion and add it to the 
left's right part 
2. you can cut out the left portion and add it to the right's left part


Edge case - > if there is no left or right then simply deattach the node and connect 
it to the next node

Approach -> figure out where the node appears 

*/
#include<iostream>
using namespace std;
class TreeNode{
    public:
    int data;
    int *left, *right;
    TreeNode(int data){
        this -> data =data;
        left = right = nullptr;
    }

};
TreeNode *deleteNode(TreeNode *root, int key){
    if(root == nullptr){
        return nullptr;
    }
    if(root ->data == key){
        return helper(root);
    }
    TreeNode *dummy = root;
    while(root != nullptr){
        if(root -> data > key){
            if(root -> left != nullptr && root -> left -> data == key){
                root -> left = helper(root -> left);
                break;
            }else{
                if(root -> right != nullptr && root -> right -> data == key){
                    root -> right = helper(root -> right);
                    break;
                }else{
                    root = root -> right;
                }
            }
        }
    }
    return dummy;
}
TreeNode *helper(TreeNode *root){
    if(root -> left == nullptr) return root -> right;
    else if(root -> right == nullptr) return root -> left;
    TreeNode *rightChild = root -> right;
    TreeNode *lastChild = findLastRight(root -> left);
    LastRight -> right = rightChild;
    return root -> left;
}
TreeNode *findLastRight(TreeNode *root){
    if(root -> right == nullptr) return root;
    return findLastRight(root -> right);
}
int main(){

}