#include "bits/stdc++.h"
using namespace std;

class reverseSentance
{
public:
    string getreversedSentrance(string str)
    {
        string ans = "";
        for (int i = 0; i < str.length(); i++)
        {
            string temp = "";
            while (str[i] != ' ')
            {
                temp += str[i];
                i++;
            }
            reverse(temp.begin(),temp.end());
            ans.append(temp+" ");
        }
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    reverseSentance obj;
    string str;
    cout << "Enter a string : " << endl;
    getline(cin, str);
    string ans = obj.getreversedSentrance(str);
    cout << "Revered Sentence: " << ans << endl;
    return 0;
}

/*
Input : This is the sentence
Output: sihT si eht ecnetnes
*/