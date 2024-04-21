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
    cout << "Enter size of list : " << endl;
    cin >> n;
    cout << "Enter Head of List : " << endl;
    cin >> Head;
    Node *head, *tail;
    head = new Node(Head);
    tail = head;
    cout << "Enter list item : " << endl;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
    }
    return head;
}
Node *getInterSect(Node *list1, Node *list2)
{
    Node *head1 = list1;
    Node *head2 = list2;
    Node *ans = new Node(-1);
    Node *temp=ans;
    // temp  ke pas ans ki intial value hai to main
    // jo bhi node temp me add karuga vo ans se connected hogi kyuki  temp ko hmne ans se initialize kiya tha 
        while (head1 != NULL and head2 != NULL)
    {
        int data1 = head1->data;
        int data2 = head2->data;
        if (data1 == data2)
        {
            temp->next = new Node(data1);
            temp = temp->next;
            head1 = head1->next;
            head2 = head2->next;
        }
        else if (data1 > data2)
        {
            head2 = head2->next;
        }
        else
        {
            head1 = head1->next;
        }
    }
 
    return ans->next;
}

void printIntersection(Node *head)
{
    printf("Intersection of Linked List\n ");
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *list1 = getList();
    Node *list2 = getList();
    Node *interSect = getInterSect(list1, list2);
    printIntersection(interSect);

    return 0;
}