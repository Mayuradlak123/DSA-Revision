#include "bits/stdc++.h"
using namespace std;

// Leetcode :  https://leetcode.com/problems/letter-combinations-of-a-phone-number/

vector<string> latterCombinations(string s)
{
    vector<string> ans;
      
    return ans;
}
int main(int argc, char const *argv[])
{
    string num;
    cout << "Enter keypad number :" << endl;
    cin >> num;

    vector<string> ans;
    ans = latterCombinations(num);

    for (auto x : ans)
    {
        cout << x << "  ";
    }

    return 0;
}
