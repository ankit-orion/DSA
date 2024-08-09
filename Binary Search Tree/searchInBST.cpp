//You'll be given a node you need to return the entire node or return its reference 
// if value does not exist then return null 
// we will be using the property of bst 
// we will check if the current node is equal tp target or not 
// if it is not equal then we will check if it is greater of lesser than the target 
// if it is greather than the target then we will move to the left 
// else we will move to right
// if you reach null then simply return null as there will be no element 
// you are not traversing entire tree
// you are traveling somewhat around the height of the tree
// and the height of the tree is (logn) on the base 2n

#include<bits/stdc++.h>
using namespace std;
class BST{
    public:
    int data;
    TreeNode *left , *right;
    TreeNode(int data){
        this -> data = data;
        left = right = nullptr;
    }
};
void search(BST *root, int val){
    while(root != nullptr && root -> NoedVal != val){
        root = Nodeval < root->NodeVal ? root -> left : root -> right;
    }
    return root;
}
int main(){
    BST *root = new BST(8);
    root -> left = new BST(5);
    root -> right = new BST(12);
    root -> left -> left = new BST(4);
    root -> left -> right = new BST(7);
    root -> left ->  -> left = new BST(6);
    root -> right -> left = new BST(10);
    root -> right -> right = new BST(14);
    root -> right -> right -> left = new BST(13);
    cout <<"Enter the node you want to search for "<< endl;
    int Nodeval;
    cin >> Nodeval;
    BST *ans = search(root, NodeVal);
    cout << ans -> left -> data << ans -> right -> data;

}