#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/valid-parentheses
class Stack
{
    private:
    unordered_map<char,char> mp={{')','('},{']','['},{'}','{'}};
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(st.size()>0)
            {
                if(st.top()==mp[s[i]])
                {
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);
        }
        if(st.size()>0)
        {
            return false;
        }
        else{
            return true;
        }
    }
   };
int main()
{
    Stack object;
    string str;
    cout << "Enter paranthesis: " << endl;
    cin >> str;
    object.isValid(str) ? cout << "Balanced Paranthesis : " << endl : cout << "Not Balanced ";
    return 0;
}