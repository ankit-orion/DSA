/*
you have to insert a node in bst such that the property of bst remains same
L < N < R

*/
// intitution -> find where the value should be in bst and then insert
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
TreeNode *inserNodeIntoBST(TreeNode *root, int val)
{
    if (root == nullptr)
        return new TreeNode(val);
    TreeNode *curr = root;
    while (true)
    {
        if (curr->data <= val)
        {
            if (curr->right != nullptr)
            {
                curr = curr->right;
            }
            else
            {
                curr->right = new TreeNode(val);
                break;
            }
        }else {
            if(curr -> left != nullptr) curr = curr -> left;
            else{
                curr -> left = new TreeNode(val);
                break;
            }
        }
    }
    return root;
}
// int main(){
//     TreeNode *root = new TreeNode(8);
//     root -> left = new TreeNode(5);
//     root -> right = new TreeNode(12);
//     root -> left -> left = new TreeNode(4);
//     root -> left -> right = new TreeNode(7);
//     // root -> left ->  -> left = new TreeNode(6);
//     root -> right -> left = new TreeNode(10);
//     root -> right -> right = new TreeNode(14);
//     root -> right -> right -> left = new TreeNode(13);
//     cout << "Enter the value for which you want to ceil "<< endl;
//     int key;
//     cin >> key;
//     cout << ceil(root, key);
// }
