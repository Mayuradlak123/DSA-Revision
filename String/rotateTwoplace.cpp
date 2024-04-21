#include "bits/stdc++.h"
using namespace std;

class rotateTwoPlaces
{
public:
    bool rotateBy2(string str1, string str2)
    {
        int i, j, n = str2.size();
        if (str1.size() != n)
        {
            return false;
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < n; j++)
            {
                swap(str2[j], str2[n - 1]);
            }
        }
        cout <<" str1: "<<str1<<": Str2: "<<str2<<endl;
        return str1 == str2;
    }
};
int main(int argc, char const *argv[])
{

    string str1, str2;
    rotateTwoPlaces obj;

    cout << "Enter string 1 : " << endl;
    cin >> str1;

    cout << "Enter string 2 : " << endl;
    cin >> str2;
    bool ans = obj.rotateBy2(str1, str2);
    if (ans)
    {
        cout << "After Rotate two places both string is same: " << endl;
    }
    else
    {

        cout << "String is Not same : " << endl;
    }
    return 0;
}
/*
Input : abcdef
Output: efabcd
*/