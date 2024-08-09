#include <iostream>
#include <stack>
using namespace std;
class newNode
{
public:
    int data;
    newNode *left, *right;
    newNode(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};
void inorder(newNode *root)
{
    stack<newNode *> s;
    s.push(root);
    while (!s.empty())
    {
        newNode *temp = s.top();
        s.pop();
        if (temp-> right != nullptr)
            s.push(temp->right);
        cout << temp->data << " ";
        if (temp->left != nullptr)
            s.push(temp->left);
    }
}
int main()
{
    newNode *root = new newNode(1);
    root->left = new newNode(2);
    root->right = new newNode(3);
    root->left->left = new newNode(4);
    root->left->right = new newNode(5);
    root->left->right->left = new newNode(8);
    root->right->left = new newNode(6);
    root->right->right = new newNode(7);
    root->right->right->left = new newNode(9);
    root->right->right->right = new newNode(10);
    inorder(root);
}