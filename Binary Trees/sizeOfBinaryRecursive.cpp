#include <iostream>

using namespace std;

// Define a class to represent the binary tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Recursive function to calculate size of a binary tree
int size(Node* root) {
    if (root == NULL) {
        return 0;
    } else {
        return size(root->left) + 1 + size(root->right);
    }
}

int main() {
    // Create a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Calculate the size of the binary tree
    int treeSize = size(root);

    // Print the size of the binary tree
    cout << "The size of the binary tree is " << treeSize << endl;

    return 0;
}
