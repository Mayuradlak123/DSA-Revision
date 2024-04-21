#include "bits/stdc++.h"
using namespace std;

class makePallindrom
{
public:
    bool isPallindrom(string str)
    {
        int i, j, n = str.length();
        j = n;
        for (i = 0, j = n - 1; i <= j; i++, j--)
        {
            if (str[i] != str[j])
            {
                return false;
            }
        }
        return true;
    }
};
int main(int argc, char const *argv[])
{
    int count = 0;
    string str;
    cout << "Enter string : "<<endl;
    cin>>str;
    makePallindrom object;
   while (str.length()>0) {
    if(object.isPallindrom(str)){
        break;
    }
    else{
        count++;
        str.erase(str.begin()+str.length()-1);
    }
   }
   cout << "Minimum charecter require to add in front : "<<count;
    return 0;
}
/*
Input: ABC
Output: 2
*/
