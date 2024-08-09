#include<iostream>
#include<queue>
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
// TreeNode* takeInput(){
//     int rootData;
//     cin >> rootData;
//     if(rootData == -1) return nullptr;
//     TreeNode *root = new TreeNode(rootData);
//     TreeNode *leftRoot = takeInput();
//     TreeNode *rightRoot = takeInput();
//     root -> left = leftRoot;
//     root -> right = rightRoot;
// }
int height(TreeNode *root){
    if(root == nullptr) return 0;
    queue<TreeNode*>q;
    q.push(root);
    int depth = 0;
    while(!q.empty()){
        int size = q.size();
        for(int i = 0; i < size; i++){
            TreeNode *temp = q.front();
            q.pop();
            if(temp -> left != nullptr) q.push(temp -> left);
            if(temp -> right != nullptr) q.push(temp -> right);
        }
        depth++;
    }
    return depth;
}
int main(){
    // TreeNode *root = takeInput();
    TreeNode* root = new TreeNode(5);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(1);
    root -> left -> right = new TreeNode(10);
    root -> right -> left = new TreeNode(3);
    root -> right -> right = new TreeNode(4);
    root -> right -> left -> left = new TreeNode(8);
    root -> right -> left -> right = new TreeNode(11);
    cout << height(root);
}
