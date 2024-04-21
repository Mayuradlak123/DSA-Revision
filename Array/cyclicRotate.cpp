#include "bits/stdc++.h"
using namespace std;

class CyclicRotateByOne
{
public:
  void getRotatedArray(int n, int *arr)
  {
    int i;
    for (i = 0; i < n; i++)
    {
      swap(arr[i], arr[n - 1]);
    }
  }
};
int main(int argc, char const *argv[])
{
  int i, n;
  cout << "Enter the length of array : " << endl;
  cin >> n;
  int arr[n];
  cout << "Enter the elements of array : " << endl;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  CyclicRotateByOne object ;
  object.getRotatedArray(n,arr);
  cout << "Array After rotation : " << endl;
  for (i = 0; i < n; i++)
  {
    cout << arr[i]<<" ";
  }
  return 0;
}
