#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/swap-nodes-in-pairs/
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
void print(Node *head)
{
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "nullptr" << endl;
}
Node *getList()
{
    int n, temp, i;

    cout << "Enter size of Linked List: " << endl;
    cin >> n;

    Node *head = NULL, *tail = NULL;
    cout << "Enter Element of Linked List : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        if (!head)
        {
            head = new Node(temp);
            tail = head;
        }
        else
        {
            tail->next = new Node(temp);
            tail = tail->next;
        }
    }
    return head;
}

void swapPair(Node *head)
{
    Node *temp = head;
    while (temp && temp->next)
    {
        swap(temp->data, temp->next->data);
        temp = temp->next->next;
    }
}
int main(int argc, char const *argv[])
{
    Node *head = getList();
    swapPair(head);
    cout << head->next->data << endl;
    cout << "Linked List : " << endl;
    print(head);
    return 0;
}
