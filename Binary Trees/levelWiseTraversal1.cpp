#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode *left, *right;
    TreeNode(int data){
        this ->data = data;
        left = right = nullptr;
    }

};
vector<int> levelWise(TreeNode *root){
    vector<int> ans;
    if(root == nullptr) return ans;
    queue<TreeNode*>q;
    q.push(root);
    int count = 1;
    while(!q.empty()){
        TreeNode *temp = q.front();
        q.pop();
        if(temp -> left != nullptr) q.push(temp -> left);
        if(temp -> right != nullptr) q.push(temp -> right);
        ans.push_back(temp -> data);
        count++;
    }
    return ans;
}
int main(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->right->left = new TreeNode(8);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->right->right->left = new TreeNode(9);
    root->right->right->right = new TreeNode(10);
    vector<int>ans = levelWise(root);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] <<" ";
    }

}