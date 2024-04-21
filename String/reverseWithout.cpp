#include "bits/stdc++.h"
using namespace std;

class reverseWithoutEffectSpecialCharecter
{
public:
    bool isAlpha(char c)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string reverse(string s)
    {
        int l = 0, h = s.length() - 1;
        while (l < h)
        {
            if (!isAlpha(s[l]))
            {
                l++;
            }
            else if (!isAlpha(s[h]))
            {
                h--;
            }
            else
            {
                swap(s[l], s[h]);
                l++;
                h--;
            }
        }
        return s;
    }
};
int main(int argc, char const *argv[])
{
    string str;
    cout << "enter str: " << endl;
    cin >> str;
    reverseWithoutEffectSpecialCharecter obj;
    cout<<"Aftere Reverse: "<<obj.reverse(str)<<endl;
    return 0;
}
