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

    int n, i, Head, temp;
    cout << "Enter size of list : " << endl;
    cin >> n;
    cout << " Enter value of head Node : " << endl;
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
Node *removeMiddle(Node *head)
{
   Node *curr=head,*temp=head;
  int i=0,n=0;
  while(temp){
    temp=temp->next;
    n++;
  }
  while(i<floor(n/2)){
    curr=curr->next;
    i++;
  }
  curr->next=curr->next->next;
  return head;
}
void printList(Node *head)
{
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout <<"NULL"<<endl;
}
int main()
{
    Node *head = getList();
    Node *rm = removeMiddle(head);
    printList(rm);
    return 0;
}