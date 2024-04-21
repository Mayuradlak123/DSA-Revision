#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
void zigzagTraversal(Node *root)
{
    if (!root)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    zigzagTraversal(root);
    return 0;
}