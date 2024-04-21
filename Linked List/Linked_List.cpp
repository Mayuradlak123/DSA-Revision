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
    next = nullptr;
  }
};

Node *insert()
{
  Node *head, *tail;
  int n, i, temp;
  cout << "Enter size of List " << endl;
  cin >> n;
  cout << "Enter List Element : " << endl;
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
    cout << head->data << " ";
    head = head->next;
  }
}
int main()
{
  Node *head = insert();
  print(head);
  return 0;
}