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
Node *intial()
{
    Node *head = new Node(-1);
    Node *tail = head;
    return head;
}
Node * push(Node *head)
{
    int x;
    cout << "Enter x for insert in Queue" << endl;
    cin >> x;
    Node *temp = new Node(x);
    temp->next = head;
    head = temp;
    cout << "Element Pushed : " << endl;
    return head;
}
void pop(Node *head)
{
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete (curr->next);
    curr->next = NULL;
    cout << "Element Poped : " << endl;
}
void top(Node *head)
{
    if (head)
    {
        cout << "Head of Queue: " << endl;
        cout << head->data << " ";
        head = head->next;
    }
    else
    {
        cout << "Queue is Empty" << endl;
    }
}
void printList(Node *head)
{
    cout << "Traversal of Linked List : " << endl;
    while (head)
    {
        if(head->data==-1){
            continue;
        }
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = intial();
   Node *p;

    while (true)
    {
        int ch;
        cout << "Enter \n 1 for push \n 2 for pop \n 3 for see top element \n 4 for traversal \n 5 for break: " << endl;
        cin >> ch;
        if (ch == 1)
        {
           p= push(head);
        }
        else if (ch == 2)
        {
            pop(p);
        }
        else if (ch == 3)
        {
            top(p);
        }
        else if (ch == 4)
        {
            printList(p);
        }
        else if (ch == 5)
        {
            break;
        }
        else
        {
            cout << "Wrong Input try Again : " << endl;
        }
    }
}