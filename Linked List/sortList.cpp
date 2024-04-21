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
        next = nullptr;
    }
};
void sortList(Node *&head)
{
    string s="";

    Node *curr = head, *temp = head;

    for (auto i = curr; i != nullptr; i = i->next)
    {
        for (auto j = i->next; j != nullptr; j = j->next)
        {
            if (i->data > j->data)
            {
                swap(i->data, j->data);
            }
        }
    }
}
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

int main(int argc, char const *argv[])
{
    Node *head = getList();
    sortList(head);
    cout << "Linked list" << endl;
    printList(head);
    return 0;
}
