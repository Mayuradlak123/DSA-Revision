#include "bits/stdc++.h"
using namespace std;

int permutation(string str, int index, int n)
{
     int ans, base;
    if (index == n)
    {
       
        
    }
    for (int i = index; i < n; i++)
    {
        
        swap(str[i], str[index]);
       
        permutation(str, index + 1, n);
        swap(str[i], str[index]);
         if(i==n-1){
            return ans;
         }
    }
}

int main()
{
    string str;

    cout << "Enter an string : " << endl;
    cin >> str;
   int ans= permutation(str,0,str.size());
   cout <<ans<<" ";
    return 0;
}