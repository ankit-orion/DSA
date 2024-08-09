#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};
int findSize(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    queue<TreeNode *> q;
    q.push(root);
    int count = 0;
    while (!q.empty())
    {
        TreeNode *temp = q.front();
        q.pop();
        if (temp->left != nullptr)
            q.push(temp->left);
        if (temp->right != nullptr)
            q.push(temp->right);
        count++;
    }
    return count;
}
int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(2);
    root->right = new TreeNode(1);
    root->left->right = new TreeNode(10);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(4);
    root->right->left->left = new TreeNode(8);
    root->right->left->right = new TreeNode(11);
    int ans = findSize(root);
    cout << ans << " ";
}