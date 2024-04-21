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
    int n,i,Head,temp;
    cout << "Enter size of list" << endl;
    cin>>n;
    cout << "Enter head" << endl;
    cin>>Head;
    Node *head,*tail;
    head=new Node(Head);
    tail=head;
    cout << "Enter list element" << endl;
    for (i=1; i<n; i++){
        cin>>temp;
        tail->next= new Node(temp);
        tail=tail->next;
    }
    return head;
}
void insert(Node *head,int k,int pos){
  Node *curr=head,*temp=head;
  int n=0;
  while(n<pos-1){
    curr=curr->next;
    n++;
  }
 Node *it=new Node(k);
 it->next=curr->next;
 curr->next=it;
}
void printList (Node *head){

   if(head->next!=NULL){
    cout <<head->data<<" ";
   }
   else{
    return;
   }
   printList(head->next);
}
int main (){
  Node *head=getList();
  int k,pos;
  cout <<"Enter position which you want to insert Node : "<<endl;
  cin>>pos;
  cout << "Enter Node data for insert: "<<endl;
  cin>>k;
insert(head,k,pos);

cout << "Linked List After Insertion: "<<endl;
printList(head);
  return 0;
}