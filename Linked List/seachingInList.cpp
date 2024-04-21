#include "bits/stdc++.h"
using namespace std;

class Node{
public:
int data;
Node *next;
Node (int val){
data=val;
next=NULL;
}
};
Node *getList (){
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
void printList(Node *head){
   while(head){
    cout << head->data << "->";
    head=head->next;
   }
}
int main (){
    Node *head=getList();
    
}