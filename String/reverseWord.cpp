#include "bits/stdc++.h"
using namespace std;

class reverseWord
{
public:
    string reverse(string str)
    {
        if(str.size()==0|| str.size()==1){
            return str;
        }
        stack<string> s;
        string temp = "",ans="";
        for (int i = 0; i < str.size(); ++i)
        {
            while (i < str.size() and str[i] != ' ')
            {
                temp += str[i];
                i++;
            }
            s.push(temp);
            temp = "";
        }
        
         while(!s.empty()){
          ans+=s.top()+" ";
          s.pop();
         }
         return ans;
    }
};
int main(int argc, char const *argv[])
{
    string str;
    reverseWord obj;
    cout << "Enter string str: " << endl;
    getline(cin,str);
    cout << "Reversed Word string : " << obj.reverse(str) << endl;
    return 0;
}
