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
        next = NULL;
    }
};

void makeLoop(Node *head, Node *tail)
{
    int k;
    cout << "Enter position: " << endl;
    cin >> k;

    Node *curr = head;
    while (k && curr)
    {
        curr = curr->next;
        k--;
    }
    tail->next = curr;
}
bool isLoop(Node *head)
{
    Node *fast = head;
    Node *slow = head;

    while (slow && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

Node *getList()
{
    int i, temp, n;
    Node *head = NULL, *tail = NULL;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "Enter Element of List : " << endl;
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
    makeLoop(head,tail);
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

int main(int argc, char const *argv[])
{
    Node * head=getList();
    if(isLoop(head)){
        cout <<"Loop is Present: "<<endl;
    }
    else{
        cout << "Loop is Not Found : "<<endl;
    }
    return 0;
}
