#include "bits/stdc++.h"
using namespace std;
vector<int> Stack;

void push(int x)
{
  Stack.push_back(x);

  cout << "Element Pushed" << endl;
}
void pop()
{
  if (Stack.size() > 0)
  {
    Stack.erase(Stack.begin() + Stack.size() - 1);
    cout << "Element Poped : " << endl;
  }
  else
  {
    cout << "Stack is Underflow " << endl;
  }
}
int top()
{
  cout << endl;
  if (Stack.size() > 0)
  {
    return Stack[Stack.size() - 1];
  }
  else
  {
    cout << "Stack is Underflow " << endl;
  }
}
bool isEmpty()
{
  if (Stack.size() == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
void traverse()
{

  cout << "Element present in Stack " << endl;

  int i;
  for (i = Stack.size() - 1; i >= 0; i--)
  {
    cout << Stack[i] << " ";
  }
  cout << endl;
}
int main()
{

  while (true)
  {
    int ch;
    cout << "Enter choice \n1 for push \n2 for pop \n3 for see top element\n4 for Traversal \n5 for check is Empty or not  \n6 for stop  : " << endl;
    cin >> ch;
    if (ch == 1)
    {
      int x;
      cout << "Enter element for push: " << endl;
      cin >> x;
      push(x);
    }
    else if (ch == 2)
    {
      pop();
    }
    else if (ch == 3)
    {
      cout << "Top Element of Stack : " << top() << endl;
    }
    else if (ch == 4)
    {
      traverse();
    }
    else if (ch == 5)
    {
      if (isEmpty())
      {
        cout << "Stack is Empty : " << endl;
      }
      else
      {
        cout << " Stack is not Empty: " << endl;
      }
    }
    else if (ch == 6)
    {
      break;
    }
    else
    {
      cout << "Wrong Choice try again : " << endl;
    }
  }
  return 0;
}