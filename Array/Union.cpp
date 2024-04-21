#include "bits/stdc++.h"
using namespace std;
vector<int> Union(int n, int m, int arr1[], int arr2[])
{
   vector<int> ans;

   // Create an unordered_set to store elements of arr1
   unordered_set<int> s;
   for (int i = 0; i < n; i++)
   {
      s.insert(arr1[i]);
   }

   // Add elements of arr1 to ans
   for (int i = 0; i < m; i++)
   {
      s.insert(arr2[i]);
   }
   ans.assign(s.begin(), s.end());
   // Check and add unique elements of arr2 to ans

   return ans;
}

int main()
{
   int i, n, m;
   cout << "Enter size of array 1 : " << endl;
   cin >> m;

   cout << "Enter size of array 2 : " << endl;
   cin >> n;
   int arr1[n], arr2[m];
   cout << "Enter Element of array 1: " << endl;
   for (i = 0; i < n; i++)
   {
      cin >> arr1[i];
   }
   cout << "Enter Element of array 2: " << endl;
   for (i = 0; i < m; i++)
   {
      cin >> arr2[i];
   }
   vector<int> ans = Union(n, m, arr1, arr2);
   cout << "Union of Both arrays : " << endl;
   for (auto x : ans)
   {
      cout << x << " ";
   }

   return 0;
}