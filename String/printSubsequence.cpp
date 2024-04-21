#include "bits/stdc++.h"
using namespace std;
void pattern(string str, string ans, int i)
{
    if (i == str.size())
    {
        cout << ans << " ";
        return;
    }
    pattern(str, ans + str[i], i + 1);
    pattern(str, ans + str[i], i + 1);
}
int main()
{
    string str, ans = "";
    cout << "Enter an String : " << endl;
    cin >> str;
    pattern(str, ans, 0);
    return 0;
}