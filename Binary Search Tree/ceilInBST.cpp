/*
problem statement -> 
given a bst you have to find ceiling of it 
ceiling = figure out the value which is >= target 
val can be equal to target or it should be just greater than the target
*/
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
int ceil(TreeNode *root, int key){
    int ans = -1;
    while(root){
        // if the key already exost in the bst then we return 
        if(root -> data == key){
            ans = root -> data;
            return ans;
        }
        //here we are checking if the key is greater than the current node val
        // if it is the case then we will not do anything we will simply cotinue

        if(key > root -> data){
            root = root -> right;
        }
        else{
            // here as the key is lesser than the node val so we will update the ans 
            // and we will continue the search
            ans = root -> data;
            root = root -> left;
        }
    }
    // at the end ans variable will store the ceil of the key given
    return ans;
}
int main(){
    TreeNode *root = new TreeNode(8);
    root -> left = new TreeNode(5);
    root -> right = new TreeNode(12);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(7);
    // root -> left ->  -> left = new TreeNode(6);
    root -> right -> left = new TreeNode(10);
    root -> right -> right = new TreeNode(14);
    root -> right -> right -> left = new TreeNode(13);
    cout << "Enter the value for which you want to ceil "<< endl;
    int key;
    cin >> key;
    cout << ceil(root, key);
}
