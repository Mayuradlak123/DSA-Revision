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
void makeLoop(Node *head)
{
    int i = 0, k;
    cout << "Enter k " << endl;
    cin >> k;
    Node *curr = head;
    while (i < k)
    {
        curr = curr->next;
        i++;
    }
    Node *temp = curr->next;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
}
int startPoint(Node *head)
{
    Node *low = head, *high = head;
    while (low != NULL and high != NULL and high->next != NULL)
    {
        low = low->next;
        high = high->next->next;
        if (low == high)
        {
           return low->data;
        }
    }
    if (low != high)
    {
        return 0;
    }
    low = head;
    while (low != high)
    {
        low = low->next;
        high = high->next;
    }
    return low->data;
}
int main()
{
    Node *head = getList();
   makeLoop(head);
    printf("Starting point of Loop : ", startPoint(head));
    return 0;
}