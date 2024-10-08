#include<iostream>
#include<vector>
using namespace std;
template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<int>*>children;
    TreeNode(T data){
        this -> data = data;
    }
};
// return type is TreeNode because it will return root of the tree
TreeNode<int>* takeInput(){
    int rootData;
    cout << "Enter root data ";
    cin >> rootData;
    TreeNode<int>*root = new TreeNode<int>(rootData);
    int n;
    cout << "enter the number of root childrens of " << rootData << endl;
    cin >> n;
    for(int i = 0; i < n; i++){
        TreeNode<int>*child = takeInput();
        root -> children.push_back(child);
    }
    return root;
}
void printTree(TreeNode<int>*root){
    if(root == nullptr) return;
    cout << root -> data <<": ";
    for(int i = 0; i < root -> children.size(); i++){
        cout << root -> children[i] -> data <<", ";
    }
    cout << endl;
    for(int i = 0 ; i < root -> children.size(); i++){
        printTree(root->children[i]);
    }
}
int main(){
    TreeNode<int>*root = takeInput();
    printTree(root);
}