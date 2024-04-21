#include "bits/stdc++.h"
using namespace std;
// Leetcodde : https://leetcode.com/problems/rotate-list/
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
Node *getList()
{
    int i, n, Head, temp;
    cout << "Enter size of array : " << endl;
    cin >> n;
    cout << "Enter head node : " << endl;
    cin >> Head;
    Node *head, *tail;
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
void rotateList(int k, Node *head)
{
    Node *curr = new Node(-1);
    Node *point = curr;
    Node *ptr = head;
    Node *itr = head;
    int i = 0, n = 0;
    while (i < k)
    {
        ptr = ptr->next;
        i++;
    }
    while (ptr != NULL)
    {
        curr->next = new Node(ptr->data);
        ptr = ptr->next;
        curr = curr->next;
    }
    int j = 0;
    while (j <= k)
    {
        curr->next = new Node(itr->data);
        itr = itr->next;
        j++;
        curr = curr->next;
    }
    point = point->next;
    while (point->next != NULL)
    {
        cout << point->data << " ";
        point = point->next;
    }
    
}
void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
  
    Node *head = getList();

    cout << "Before Rotate Linked List : " << endl;
    printList(head);
  int k;
    cout << "Enter k : " << endl;
    cin >> k;
    cout << "After Rotate Linked List : " << endl;

    rotateList(k, head);

    return 0;
}