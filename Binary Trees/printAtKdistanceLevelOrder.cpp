// you are given a binary tree you need to print the nodes which are at distance k from the root
// if k is 2 then you need to print k + 1 th level
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
vector<int> printAtKLevel(TreeNode *root, int k){
    vector<int>res;
    if(root == nullptr) return res;
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
            if(depth == k){
                res.push_back(temp -> data);
            }
        }
        depth++;
    }
    return res;
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
    vector<int>ans = printAtKLevel(root, k);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}