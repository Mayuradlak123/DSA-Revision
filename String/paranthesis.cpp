#include "bits/stdc++.h"
using namespace std;
bool isBalanced(string str)
{
    stack<char> s;
    int i;
    for (auto x: str)
    {
        if (s.empty())
        {
            s.push(x);
        }
        else if ((x == '}' and s.top() == '{') or (x == ')' and s.top() == '(') or (x == ']' and s.top() == '['))
        {
            s.pop();
        }
        else
        {
            s.push(x);
        }
    }

    /*   if (x == '{' or x == '(' or x == '[')
       {
           s.push(x);
       }
       else
       {
           if (s.empty())
           {
               return false;
           }
           else if (x == '}')
           {
               if (s.top() == '{')
               {
                   s.pop();
               }
               else
               {
                   return false;
               }
           }
           else if (x == ')')
           {
               if (s.top() == '(')
               {
                   s.pop();
               }
               else
               {
                   return false;
               }
           }
           else if (x == ']')
           {
               if (s.top() == '[')
               {
                   s.pop();
               }
               else
               {
                   return false;
               }
           }
           else
           {
               return false;
           }
       }*/

    if (s.empty())
    {
        cout << "Paranthesisi is Balanced : " << endl;
        return true;
    }
    else
    {
        cout << "Balanced is Not Paranthesis: " << endl;
    }
}
int main()
{
    string str;
    cout << "Enter paranthesis: " << endl;
    cin >> str;
    cout << isBalanced(str) << endl;
    return 0;
}