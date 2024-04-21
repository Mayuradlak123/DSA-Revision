#include "bits/stdc++.h"
using namespace std;

class Stack
{
public:
    string reversed(string str)
    {
        if (str.size() == 0)
        {
            return "";
        }
        stack<string> s;
        string temp = "",ans="";
        int i, n = str.size();
        for (i = 0; i < n; i++)
        {
            while (str[i] != ' ' and i < n)
            {
                if (str[i] != ' ')
                {
                    temp += str[i];
                    i++;
                }
              
            }
              s.push(temp);
                temp = "";
        }
        while (!s.empty())
        {
            ans+=s.top()+" ";
            s.pop();
        }
           return ans;
    }
 
};
int main()
{
    Stack object;
    string str;
    cout << "Enter string : " << endl;
    getline(cin, str);
    string ans = object.reversed(str);
    cout << "Reversed String : " << ans << " ";
    return 0;
}