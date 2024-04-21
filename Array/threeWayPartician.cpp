#include "bits/stdc++.h"
using namespace std;
void threeWayPartician(int n, int arr[], int a, int b)
{
    /*
  1) All elements smaller than a come first.
  2) All elements in range a to b come next.
  3) All elements greater than b appear in the end.
   int n = 10;
      int arr[] = {3, 8, 2, 5, 1, 7, 6, 4, 9, 0};
      int a = 3, b = 6;
  */
    int i, m = 0, h = n - 1, l = 0;

    while (m <= h)
    {
        if (arr[m] < a)
        {
            swap(arr[m], arr[l]);
            l++, m++;
        }
        else if (arr[m] >= a && arr[m] <= b)
        {
            m++;
        }
        else if (arr[m] > b)
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }
}
int main()
{
    int i, n, a, b;
    cout << "Enter length of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Element of array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter value of a : " << endl;
    cin >> a;
    cout << "Enter value of b : " << endl;
    cin >> b;
    threeWayPartician(n, arr, a, b);
     cout << "Partitioned array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}