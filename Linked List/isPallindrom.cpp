#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/palindrome-linked-list
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
bool isPallindrom(Node *head)
{
    Node *curr = head, *temp = head;

    stack<int> s;
    while (curr)
    {
        s.push(curr->data);
        curr = curr->next;
    }

    while (temp)
    {
        if (s.top() != temp->data)
        {
            return false;
        }
        temp = temp->next;
        s.pop();
    }
    return true;
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
int main(int argc, char const *argv[])
{
    Node *head = getList();
    if (isPallindrom(head))
    {
        cout << "Linked List is Pallindrom : " << endl;
    }
    else
    {
        cout << "Linked List is Not Pallindrom : " << endl;
    }
    cout << "\n Linked List : " << endl;
    printList(head);
    return 0;
}
