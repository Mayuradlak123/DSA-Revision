#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/reverse-linked-list/
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
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
void printList(Node *head)
{
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "null" << endl;
}

Node *reverse(Node *head)
{
    Node *curr = head, *temp, *prev = NULL;
    while (curr)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
int main(int argc, char const *argv[])
{
    Node *head = getList();
    cout << "Linked List: " << endl;
    printList(head);
    cout << "\n Reversed Linked List: " << endl;
    Node *prev = reverse(head);
    printList(prev);
    return 0;
}
