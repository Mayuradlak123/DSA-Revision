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
Node * Push()
{
    int k;
    cout << "Enter element for push : " << endl;
    cin >> k;
    Node *temp = new Node(k);
    temp = temp->next;
    return temp;
}
void printList(Node *head){
   while(head){
    cout <<head->data<<"->";
    head=head->next;
   }
}
int main()
{
Node *i=Push();
Node *j=Push();
printList(j);
    return 0;
}
