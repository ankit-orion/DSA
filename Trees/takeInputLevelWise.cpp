#include <iostream>
#include <vector>
#include <queue>
using namespace std;
template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;
    TreeNode(T data)
    {
        this->data = data;
    }
};
TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "enter root data " << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    // here we will create a queue of type treenode as we have to
    // connect those nodes with the upcoming nodes
    // we cannot add only data to the root
    // here the type of queue will be TreeNode and the tyoe of treenode is int
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        /* code */
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter number of childrens of " << front->data << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter " << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void printTree(TreeNode<int> *root)
{
    if (root == nullptr)
        return;
    cout << root->data << ": ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ", ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}
int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    printTree(root);
}