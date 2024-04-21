#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
Node *getNode()
{
    int i, n, Head, temp;
    cout << "Enter n: " << endl;
    cin >> n;
    Node *head, *tail;
    cout << "Enter Head : " << endl;
    cin >> Head;
    head = new Node(Head);
    tail = head;
    cout << "Enter list element : " << endl;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
    }
    return head;
}
Node *removeDuplicate(Node *head)
{
    Node *curr = head;
    set<int> s;
    while (curr->next != NULL)
    {
        s.insert(curr->data);
        if (s.find(curr->next->data) != s.end())
        {
            curr->next = curr->next->next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}
void printList(Node *head)
{
    if (head)
    {
        cout << head->data << " ";
    }
    else
    {
        return;
    }
    printList(head->next);
}
int main()
{
    Node *head = getNode();
    Node *rm = removeDuplicate(head);
    printf("After Remove Duplicate Element : ");
    printList(rm);
    return 0;
}