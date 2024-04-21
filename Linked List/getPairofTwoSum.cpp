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
Node *getList()
{
    int i, n, temp;
    cout << "\nEnter the number of nodes in linked list : ";
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;
    cout <<"Enter element of list : "<<endl;
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
    cout <<"NULL"<<endl;
}
vector<int> getPair(Node *head, int k)
{
    vector<int> ans;
    Node *itr1 ;
    Node *itr2 ;
    Node *temp = head;
    int n = 0;
    while (temp)
    {
        temp = temp->next;
        n++;
    }
    for (itr1 = head; itr1 != NULL; itr1 = itr1->next)
    {
        for (itr2 = itr1->next; itr2 != NULL; itr2 = itr2->next )
        {
            if ((itr1->data + itr2->data) == k)
            {
                ans.push_back(itr1->data);
                ans.push_back(itr2->data);
            }
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> ans;
    int k;
    Node *head = getList();
    cout << "Enter k: " << endl;
    cin >> k;
    ans = getPair(head, k);
    cout <<"Pair :"<<endl;
    for (auto const x:ans){
        cout<<x<<" ";
    }
    cout <<"\nIteration of list : "<<endl;
    printList(head);
    return 0;
}
