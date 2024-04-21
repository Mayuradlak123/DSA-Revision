#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
class Node
{
public:
    Node *next;
    int data;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
Node *getList()
{
    int i, n, temp;
    cout << "Enter size of list : " << endl;
    cin >> n;
    Node *head = nullptr, *tail = nullptr;
    cout << "Enter list element: " << endl;
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
    cout << "nullptr" << endl;
}

void removeDuplicate(Node *&head)
{
    Node *curr = head;
    while (curr && curr->next)
    {
        if (curr->data == curr->next->data)
        {
            Node *del = curr->next;
            curr->next = del->next;
            delete del;
        }
        else
        {
            curr = curr->next;
        }
    }
}
int main(int argc, char const *argv[])
{
    Node *head = getList();
    cout << "Linked list before remove: " << endl;
    printList(head);
    removeDuplicate(head);
    cout << "Linked list After remove: " << endl;
    printList(head);
    return 0;
}
