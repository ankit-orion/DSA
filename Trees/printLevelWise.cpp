#include <iostream>
#include <queue>
#include <vector>
using namespace std;
template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<int> *> children;
    TreeNode(T data)
    {
        this->data = data;
    }
};
TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter the root data " << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout << "Enter the number of childrens of " << front->data << endl;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "enter the " << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void printLevelWise(TreeNode<int> *root)
{

    if (root->data == NULL)
        return;

    queue<TreeNode<int> *> pendingnodes;
    pendingnodes.push(root);

    while (pendingnodes.size() != 0)
    {
        TreeNode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        cout << front->data << ":";
        for (int i = 0; i < front->children.size(); i++)
        {
            pendingnodes.push(front->children[i]);
            if (i == front->children.size() - 1)
                cout << front->children[i]->data;

            else
                cout << front->children[i]->data << ",";
        }
        cout << endl;
    }
}
int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    printLevelWise(root);
}
