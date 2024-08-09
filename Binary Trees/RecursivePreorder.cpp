// preorder traversal is : we print the root data first and then we go to left node and then we go to right node
// // and then we print the its data
// as we cannot move from a child to its parent so we need to store at each iteration so we will be using an
// explicit data structure called stack
// Now why stack ?
// it is not necessary to use stack only we can use queue also
// now we will print root data first in while loop
// then we will push the right node in the stack and then we will push the left node
#include <iostream>
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
void preorder(TreeNode *root)
{
    if (root == nullptr)
        return;
    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    preorder(root);
}
