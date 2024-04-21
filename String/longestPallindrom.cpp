#include "bits/stdc++.h"
using namespace std;
int longestPallindrom(string str)
{
    int i, n = str.length(), start = 0, end = 1, l, h;
    for (i = 0; i < n; i++)
    {
        l = i - 1;
        h = i;
        while (l >= 0 and h < n and str[l] == str[h])
        {
            if (h > end)
            {
                end=h;
                start=l;
            }
            l--;
            h++;
        }
        l = i - 1;
        h = i + 1;
        while (l >= 0 and h < n and str[l] == str[h])
        {
            if (h > end)
            {
                end=h;
                start=l;
            }
            l--;
            h++;
        }
    }
    cout << "Longest Pallindrom String : " << endl;
    for (int j = start; j <= end; j++)
    {
        cout << str[j] << "";
    }
    cout << endl;
    return (end - start) + 1;
}
int main()
{
    string str;
    cout << "Enter an String  : " << endl;
    cin >> str;
    printf("Longest Pallindromic string length is : %d ", longestPallindrom(str));

    return 0;
}
/* int i, start = 0, end = 1, l, h;
    for (i = 1; i < str.length(); i++)
    {
        // This Code for Even length  pallindromic string
        l = i - 1;
        h = i;
        while (l >= 0 and h < str.length() and str[l] == str[h])
        {
            if (h > end)
            {
                end = h;
                start = l;
            }
            h++;
            l--;
        }
        l = i - 1;
        h = i + 1;
        while (l >= 0 and h < str.length() and str[l] == str[h])
        {
            if (h > end)
            {
                end = h;
                start = l;
            }
            h++;
            l--;
        }
    }
    for (i = start; i <= end; i++)
    {
        cout << str[i] << "";
    }
*/