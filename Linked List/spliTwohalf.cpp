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
    int i, n, h, temp;
    cout << "Enter number of element :" << endl;
    cin >> n;
    cout << "Enter head of list: " << endl;
    cin >> h;
    Node *head = NULL, *tail = NULL;
    head = new Node(h);
    tail = head;
    cout << "Enter Element of list: " << endl;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
    }
    return head;
}
void divide(Node *head, Node *list1, Node *list2)
{
    int n = 0, i = 0;
    Node *curr = head;
    Node *temp=head;
    Node *l1 = new Node(-1);
    Node *l2 = new Node(-1);

    while (temp)
    {
        n++;
        temp = temp->next;
    }

    while (i <= n / 2)
    {
        l1->next = new Node(curr->data);
        l1 = l1->next;
      
        curr = curr->next;
        i++;
    }
    cout <<endl;
    while (curr)
    {
        l2->next = new Node(curr->data);
        l2 = l2->next;
      
        curr = curr->next;
    }
    list1 = l1->next;
    list2 = l2->next;

}
void printList(Node *head)
{
    Node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
cout << "NULL"<<endl;
}
int main()
{
    Node *head = getList();
    Node *list1, *list2;
    cout << "Original Linked List : " << endl;
    // printList(head);

    divide(head, list1, list2);
    // printList(head); 
    // cout <<endl;
    // cout << "First Linked List : " << endl;
    // printList(list1);
    // cout << "Second linked List : " << endl;
    // printList(list2);
    return 0;
}