#include "bits/stdc++.h"
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node (int val){
        data=val;
        next=NULL;
    }
};
Node *getList (){
    int i,n,temp,Head;
    cout << "Enter size of list : "<<endl;
    cin>>n;
    cout << "Enter Head of List : "<<endl;
    cin>>Head;
    Node *head,*tail;
    head=new Node (temp);
    tail=head;
    cout << "Enter list element : "<<endl;
    for (i=0; i<n; i++){
        cin>>temp;
        tail->next=new Node (temp);
        tail =tail->next;
    }
    return head;
}
string getMultiply (Node *list1,Node *list2){
   long long ans1=1,ans2=1;
   string a1="",a2="";
   while(list1){
    a1+=to_string(list1->data);
    list1=list1->next;    
   }
   while(list2){
   a2+=to_string(list2->data);
   list2=list2->next;
   }
   istringstream(a1)>>ans1;
   istringstream(a2)>>ans2;
   
}
int main()
{
    Node *list1= getList();
    Node *list2= getList();
  string ans=getMultiply(list1,list2);
  printf("Multiplication of given list is : ",ans);
    return 0;
}