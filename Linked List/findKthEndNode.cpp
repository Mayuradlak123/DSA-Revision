#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    Node *next;
    int data;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int getNthNode(Node *head, int k)
{
  // We have to get Kth element from end 
    int n=0, i=0;
    Node *curr = head, *temp = head;
    while (temp)
    {
        temp = temp->next;
        n++;
    }
    while (i != n - k)
    {
        curr = curr->next;
        i++;
    }
    return curr->data;
}
Node *getList()
{
    int i, temp, n;
    cout << "Enter size of List " << endl;
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;
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
void print(Node *head)
{
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}
int main(int argc, char const *argv[]){
    Node *head= getList();
    int k;
    cout <<"Enter k"<<endl;
    cin>>k;
    cout <<"Kth End Node From Linked List : "<<getNthNode(head,k)<<endl;
    cout << "\nLinked List "<<endl;
    print(head);
    return 0;
}
