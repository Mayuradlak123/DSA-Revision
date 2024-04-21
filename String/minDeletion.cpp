#include "bits/stdc++.h"
using namespace std;

class minDeletionMakePallindrom
{
public:
    int minDeletion(string str)
    {
        if (str.length() == 2)
        {
            return 1;
        }
        if (str.length() == 1)
        {
            return 0;
        }
        int i, n = str.length(), h = str.length() - 1, l = 0;

        int count = 0;
        for (i = 0; i < n; i++)
        {
            if (str[l] != str[h])
            {
                count++;
            }
            l++, h--;
        }
        return count;
    }
};
int main(int argc, char const *argv[])
{
    minDeletionMakePallindrom object;

    string str;
    cout << "Enter String : " << endl;
    cin >> str;
    cout << "Minimum Deletion to make Pallindrom :" << object.minDeletion(str) << endl;
    return 0;
}
