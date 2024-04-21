#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};
void traversal(Node *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    traversal(root->left);
    traversal(root->right);
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    cout << "Tree Traversal : " << endl;
    traversal(root);
    
    // Free memory
    free(root);
    return 0;
}
