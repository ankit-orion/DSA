#include <iostream>
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
void isBalanced(TreeNode *root)
{
    return dfsHeight(root) != -1;
}

int dfsHeight(TreeNode *root)
{

    if (root == NULL)
        return 0;

    int leftHeight = dfsHeight(root->left);

    if (leftHeight == -1)
        return -1;

    int rightHeight = dfsHeight(root->right);

    if (rightHeight == -1)
        return -1;

    if (abs(leftHeight - rightHeight) > 1)
        return -1;

    return max(leftHeight, rightHeight) + 1;
}