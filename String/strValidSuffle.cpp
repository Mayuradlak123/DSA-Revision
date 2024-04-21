#include "bits/stdc++.h"

using namespace std;
bool isValidSuffle(string str1, string str2)
{
    int n = str1.length(), m = str2.length(), j = 0, count = 0;
    if (n < m)
    {
        return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(),str2.end());
    set<string> s;

    for (int i = 0; i < n; i++)
    {
     for (j=0; j<m; j++){
        if(str1[i]==str2[j]){
           count++;
        }
     }
    }
    cout << "The value of count" << count << " ";
    return false;
}
int main()
{
    string str1, str2;
    cout << "Enter str1 : " << endl;
    cin >> str1;

    cout << "Enter str2 : " << endl;
    cin >> str2;
    if (isValidSuffle(str1, str2))
    {
        cout << "Is Valid suffle : " << endl;
    }
    else
    {
        cout << "Not Valid Suffle " << endl;
    }
    return 0;
}