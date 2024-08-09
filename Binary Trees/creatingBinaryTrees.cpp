#include <iostream>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    cout << "Printing binary tree nodes :" << endl;

    cout << "printing root data :" << root->data << endl;
    cout << "printing root left data " << root->left->data << endl;
    cout << root->right->data << endl;
    cout << root->left->left->data << endl;
    cout << root->left->right->data << endl;
    cout << root->right->left->data << endl;
    cout << root->right->right->data << endl;
}