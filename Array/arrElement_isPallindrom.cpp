#include "bits/stdc++.h"
using namespace std;

/*
Example : [1,2,5,2,1] --> True  Given array is pallindrome
Example : [8,2,5,9,1] --> False 
*/
bool isPallindrom(int n, int arr[])
{
  int rev = 0, rem = 0, i, temp = 0;
  vector<int> ans;
  for (i = 0; i < n; i++)
  {
    temp = arr[i];
    while (temp != 0)
    {
      rem = temp % 10;
      rev = rev * 10 + rem;
      temp = temp / 10;
    }
    ans.push_back(rev);

    rev = 0;
  }
  for (i = 0; i < n; i++)
  {
    if (ans[i] != arr[i])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int i, n;
  cout << " Enter size of array: " << endl;
  cin >> n;
  int arr[n];
  cout << "Enter Element of array: " << endl;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int ans = isPallindrom(n, arr);
  if (ans)
  {
    cout << "Given array element is pallindrom : " << endl;
  }
  else
  {
    cout << "Not Pallindrom : " << endl;
  }
  return 0;
}

/*
bool isPallindrom(int n, int arr[])
{
  int rev = 0, rem, i, t;
  vector<int> v;
  for (i = 0; i < n; i++)
  {
    t = arr[i];
    while (t != 0)
    {
      rem = t % 10;
      rev = rev * 10 + rem;
      t = t / 10;
    }
    v.push_back(rev);
    rev = 0;
  }
  for (i = 0; i < n; i++)
  {
    if (arr[i] != v[i])
    {
      return false;
    }
  }
  return true;
}

*/