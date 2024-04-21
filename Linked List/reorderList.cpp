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
        next = nullptr;
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
Node *reorderList(Node *head)
{
    Node *temp = head, *prev;
    vector<int> v,arr;
    while (temp)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    sort(v.begin(), v.end());
    Node *curr = new Node(-1);
    int i = 0, n = v.size();
    for (i = 0; i < n; i++)
    {
        arr.push_back(v[i]);
        n--;
        arr.push_back(v[n]);
    }
    i = 0;
    n = arr.size();
    prev = curr;
    while (i < n)
    {
        curr->next = new Node(arr[i]);
        curr = curr->next;
        i++;
    }
    return prev->next;
}
void printList(Node *head)
{

    while (head != nullptr)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "nullptr" << endl;
}
int main(int argc, char const *argv[])
{
    Node *head = getList();
    Node *ans = reorderList(head);
    cout << "Reorder List : " << endl;
    printList(ans);
    return 0;
}
