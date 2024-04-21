#include "bits/stdc++.h"
using namespace std;
class Node{
     public:
     int data;
     Node *next;
     Node (int value){
        data =value;
        next=NULL;
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
void printList(Node *head)
{
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "null" << endl;
}
void insertAtHead(Node *&head,int x){

    Node *temp=new Node(x);
    temp->next=head;
    head=temp;
}
int main(int argc, char const *argv[])
{
   Node *head=getList();
    insertAtHead(head,20);
    cout<<"Linked List : "<<endl;
    printList(head);
    return 0;
}