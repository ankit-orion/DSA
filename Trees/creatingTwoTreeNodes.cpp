#include<iostream>
#include<vector>
using namespace std;
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
    TreeNode<int>* root = new TreeNode<int>(10);
    TreeNode<int>* node1 = new TreeNode<int>(20);
    TreeNode<int>* node2 = new TreeNode<int>(30);
    root -> children.push_back(node1);
    root -> children.push_back(node2);
    printTree(root);
}