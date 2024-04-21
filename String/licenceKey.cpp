#include "bits/stdc++.h"
using namespace std;

class generateLicenceKey
{
public:
   string getGenerate(string str, int k)
   {
      int i, n = str.length();
      string temp = "", ans = "";
      for (i = 0; i < n; i++)
      {
         while (str[i] != '-' and i < n)
         {
            temp += toupper(str[i]);

            if (temp.size() == k)
            {
               ans += temp;
               temp = "";
            }
            i++;
         }
      }
         return ans;
      }
   };
   int main(int argc, char const *argv[])
   {
      generateLicenceKey object;
      string str;
      cout << " Enter String for Generate Key : " << endl;
      cin >> str;
      int k;
      cout << "Enter k : " << endl;
      cin >> k;
      cout << "Licence Key :  " << object.getGenerate(str, k);
      return 0;
   }
