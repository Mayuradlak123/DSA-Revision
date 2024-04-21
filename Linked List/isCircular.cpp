#include "bits/stdc++.h"
using namespace std;

class Node{
     public:
     int data;
     Node *next;
     Node (int value){
        data =value;
        next=NULL;
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
    tail->next=head;
    return head;
}
void printList(Node *head)
{
    Node *curr = head;
    do{
        cout << curr->data << "->";
        curr = curr->next;
    }while (curr != head);
    cout << "null" << endl;
}
bool isCircular(Node *head) {
    if (head == nullptr)
        return false;

    Node *slow = head;
    Node *fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;       // Move slow pointer by one step
        fast = fast->next->next; // Move fast pointer by two steps
        if (slow == fast)
            return true;
    }
    return false;
}

int main(int argc, char const *argv[]){
    Node *head=getList();
    cout <<"Circular Linked List: "<<endl;
    printList(head);
    return 0;
}
