#include "bits/stdc++.h"
using namespace std;

class binarySearch
{
public:
  int  searchElement(int n, int k, int *arr)
  {
    int start = 0, end = n;

    while (start < end)
    {
      int mid = (start + end) / 2;
      if (arr[mid] == k)
      {
        return mid;
      }
      else if (arr[mid] > k)
      {
        end = mid - 1;
      }
      else if (arr[mid] < k)
      {
        start = mid + 1;
      }
    }
    return -1;
  }
};
int main()
{
  binarySearch object;
  int i, n, k;
  cout << "Enter value of n" << endl;
  cin >> n;
  int arr[n];
  cout << "Enter element of array " << endl;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter value of k" << endl;
  cin >> k;
  int index=object.searchElement(n, k, arr);
  if (index>1)
  {
    cout << "Elements found at index :"<<index << endl;
  }
  else
  {
    cout << "No elements found in array ";
  }
  return 0;
}
