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
Node *getList()
{
    int i, n, Head, temp;
    cout << "Enter n :" << endl;
    cin >> n;
    Node *head, *tail;
    cout << "Enter Head of Linked List : " << endl;
    cin >> Head;
    head = new Node(Head);
    tail = head;
    cout << "Enter list Item : " << endl;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
    }
    return head;
}
void insertAtMiddle(Node *head)
{
    int mid = 0, i = 0, j = 0, midNode;
    Node *curr = head;
    Node *temp = head;
    cout << "Enter node for Insertion : " << endl;
    cin >> midNode;
    while (curr)
    {
        curr = curr->next;
        i++;
    }
    mid = (i / 2);
    Node *middle = new Node(midNode);
    while (j < mid-1)
    {
        temp = temp->next;
        j++;
    }
    middle->next = temp->next;
    temp->next = middle;
}
void print(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = getList();
    insertAtMiddle(head);
    insertAtMiddle(head);
    print(head);
    return 0;
}