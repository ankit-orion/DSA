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
int floor(TreeNode *root, int key){
    int ans = -1;
    while(root){
        // if the key already exist in the bst then we return 
        if(root -> data == key){
            ans = root -> data;
            return ans;
        }
        if(key > root -> data){
            ans = root -> data
            root = root -> right;
        }
        else{
            root = root -> left;
        }
    }
    return ans;
}
int main(){
    TreeNode *root = new TreeNode(8);
    root -> left = new TreeNode(5);
    root -> right = new TreeNode(12);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(7);
    root -> right -> left = new TreeNode(10);
    root -> right -> right = new TreeNode(14);
    root -> right -> right -> left = new TreeNode(13);
    cout << "Enter the value for which you want to floor "<< endl;
    int key;
    cin >> key;
    cout << floor(root, key);
}
