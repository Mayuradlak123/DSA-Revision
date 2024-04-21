#include "bits/stdc++.h"
using namespace std;
class N
{
public:
    N *next;
    int data;
    N(int val)
    {
        data = val;
        next = NULL;
    }
};
void printList(N *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}