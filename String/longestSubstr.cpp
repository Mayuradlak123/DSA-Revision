#include "bits/stdc++.h"
using namespace std;
int longestSubstring(string str)
{
    int i, len = 1, maxLen = 0, n = str.size();
    string temp = "";
    for (i = 0; i < n; i++)
    {
        if (str[i-1]  == str[i]-1)
        {
            
            len++;
            if (len > maxLen)
            {
                maxLen = max(len, maxLen);
                len = 1;
            }
        }
    }
    return maxLen+1;
}
int main()
{
    string str;
    cout << "Enter str : " << endl;
    cin >> str;
    printf("Longest Substring length is : %d ", longestSubstring(str));
    return 0;
}