#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
// Time Complexity : O(n)
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
    int i, n, temp;
    cout << "Enter size of list : " << endl;
    cin >> n;
    Node *head = nullptr, *tail = nullptr;
    cout << "Enter list element: " << endl;
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
    cout << "nullptr" << endl;
}
Node *removeDuplicate(Node *head)
{
    Node *temp = head, *prev = head, *curr = new Node(-1);
    Node *ans = curr;
    vector<int> v;
    while (temp)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    map<int, int> mp;
    int i = 0, n = v.size();
    for (i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    for (auto x : mp)
    {
       
        if (x.second == 1)
        {
            curr->next = new Node(x.first);
            curr = curr->next;
        }
    }
    return ans->next;
}
int main(int argc, char const *argv[])
{
    /* code */
    Node *head = getList();
    Node *ans = removeDuplicate(head);
    cout << "Linked list : " << endl;
    printList(ans);
    return 0;
}
