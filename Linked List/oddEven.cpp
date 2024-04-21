#include "bits/stdc++.h"
#include "LinkedList.h"
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
    int i, n, Head, temp;
    cout << "Enter size of list: " << endl;
    cin >> n;
    Node *tail, *head;
    cout << "Enter Head of list: " << endl;
    cin >> Head;
    head = new Node(Head);
    tail = head;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        tail->next = new Node(temp);
        tail = tail->next;
    }
    return head;
}
Node *oddEven(Node *head)
{
 
    Node *even = new Node(-1);
       Node *odd=new Node(-1);
    Node *itr = head;
    Node *ans = even;
    while (itr)
    {
        if ((itr->data) % 2 == 0)
        {
            even->next = new Node(itr->data);
            even = even->next;
        }
        itr = itr->next;
    }
    even->next = odd;
    
    while (head)
    {
        if ((head->data) % 2 != 0)
        {
            odd->next = new Node(head->data);
            odd = odd->next;
        }
        head = head->next;
    }
    return ans->next;
}
void printList(Node *head)
{
    while (head)
    {
        if(head->data!=-1){
        cout << head->data << " ";            
        }
        head = head->next;
    }
}
int main()
{
    Node *head = getList();
    Node *ans = oddEven(head);
    printList(ans);
    return 0;
}