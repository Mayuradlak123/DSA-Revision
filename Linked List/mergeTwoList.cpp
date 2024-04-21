#include "bits/stdc++.h"
using namespace std;

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
    int i, temp, n;
    Node *head = NULL, *tail = NULL;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "Enter Element of List : " << endl;
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
Node *mergedList(Node *list1, Node *list2)
{
    Node *temp = new Node(0);
    Node *curr = temp;
    Node *l1 = list1, *l2 = list2;
    while (l1)
    {
        temp->next = new Node(l1->data);
        temp = temp->next;
        l1 = l1->next;
    }
    while (l2)
    {
        temp->next = new Node(l2->data);
        temp = temp->next;
        l2 = l2->next;
    }
    return curr->next;
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
    Node *list1 = getList();
    Node *list2 = getList();
    Node *head = mergedList(list1, list2);
    printList(head);
    return 0;
}
