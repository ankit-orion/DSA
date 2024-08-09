#include<iostream>
#include<vector>
using namespace std;
// this is also called generic tree
template <typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*>children;
    TreeNode(T data){
        this -> data = data;
    }
};
void printTree(TreeNode<int>* root){
    // we don't require base case in case of generic tree
    // but just in case if someone sends null tree
    // then in that case we need to handle that edge case
    // this should not be considered as a base case
    // consider this as a edge case
    if(root == NULL){
        return;
    }
    cout << root -> data <<" : ";
    for(int i = 0; i < root -> children.size(); i++){
        cout << root -> children[i]->data<<", ";
    }
    cout << endl;
    for(int i = 0 ; i < root -> children.size(); i++){
        printTree(root->children[i]);
    }
}
int main(){
    TreeNode<int>*root = new TreeNode<int>(10);
    TreeNode<int>*node1 = new TreeNode<int>(20);
    TreeNode<int>*node2 = new TreeNode<int>(30);
    TreeNode<int>*node3 = new TreeNode<int>(40);
    TreeNode<int>*node4 = new TreeNode<int>(50);
    TreeNode<int>*node5 = new TreeNode<int>(60);
    TreeNode<int>*node6 = new TreeNode<int>(70);
    TreeNode<int>*node7 = new TreeNode<int>(80);
    TreeNode<int>*node8 = new TreeNode<int>(90);
    TreeNode<int>*node9 = new TreeNode<int>(90);
    root -> children.push_back(node1);
    root -> children.push_back(node2);
    root -> children.push_back(node3);
    node1 -> children.push_back(node4);
    node1 -> children.push_back(node5);
    node1 -> children.push_back(node6);
    node3 -> children.push_back(node7);
    node3 -> children.push_back(node8);
    node3 -> children.push_back(node9);
    printTree(root);
    return 0;
}