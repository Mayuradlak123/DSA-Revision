#include "bits/stdc++.h"
using namespace std;

void insertAtBottom(stack<int> &st, int item)
{
    if (st.empty())
    {
        st.push(item);
    }
    else
    {
        int temp = st.top();
        st.pop();
        insertAtBottom(st, item);
        st.push(temp);
    }
}
void reverseStack(stack<int> &st)
{
    if (!st.empty())
    {
        int item = st.top();
        st.pop();
        reverseStack(st);
        insertAtBottom(st, item);
    }
}
void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

void reverseStack01(stack<int> &s, int n)
{
    stack<int> auxStack;
    int i = 0;
    while (!s.empty())
    {
        int event = s.top();
        s.pop();
        auxStack.push(event);
    }
    while (!auxStack.empty())
    {
        s.push(auxStack.top());
        auxStack.pop();
    }
    cout << "Reversed Stack : "<<endl;
     while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> st;
    int n, i, temp;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "Enter Stack element :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        st.push(temp);
    }

    reverseStack01(st, n); // Using While Loop
    // reverseStack(st); Using Recursion
    return 0;
}
