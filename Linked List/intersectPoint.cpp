#include "bits/stdc++.h"
using namespace std;

class Node {
    public:
  int data;
  Node *next;
  Node (int val){
    data=val;
    next=NULL;
  }
};
Node *getList(){
      int i, Head, temp, n;
    cout << "Enter n : " << endl;
    cin >> n;
    cout << "Enter head : " << endl;
    cin >> Head;
    Node *head, *tail;
    head = new Node(Head);
    tail = head;
    cout << "Enter Linked List Element : " << endl;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
    }
    return head;
}
int interSectionPoint(Node *list1,Node *list2){
    set<int>s;
    Node *temp=list1;
    while(temp){
        s.insert(temp->data);
        temp= temp->next;
    }
    while(list2){
     if(s.find(list2->data)!=s.end()){
        return list2->data;
     }
     list2=list2->next;
    }
    return -1;
}
void printList(Node *head){
    while(head){
        cout <<head->data<< " ";
        head=head->next;
    }
}
int main (){
  Node *list1=getList ();
  Node *list2=getList ();
  printf ("Intersection point of Two Linked List : %d ",interSectionPoint(list1,list2));
  return 0;
}