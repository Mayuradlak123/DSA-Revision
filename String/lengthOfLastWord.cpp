#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/length-of-last-word/
int lengthOfLastWord(string str)
{
    int ans = 0, i = 0;
    for (i = str.size() - 1; i > 0; i--)
    {
        while (str[i] != ' ')
        {
            ans++;
            i--;
        }
        break;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    string str;

    cout << "Enter a string: " << endl;
    getline(cin, str);

    int ans = lengthOfLastWord(str);
    cout << "Length of last word in string :  " << ans << endl;

    return 0;
}
