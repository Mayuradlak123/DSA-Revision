#include "bits/stdc++.h"
using namespace std;
bool isSubset(int n, int m, int arr1[], int arr2[])
{

    int i, j, c = 0;
    set<int> s;
    for (i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }
    for (j = 0; j < m; j++)
    {
        if (s.find(arr2[j]) != s.end())
        {
            c++;
        }
    }
    if (min(n, m) == c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//
int main()
{
    int i, j, n, m;
    cout << "Enter size of array 1: " << endl;
    cin >> n;
    cout << "Enter size of array 2: " << endl;
    cin >> m;
    int arr1[n], arr2[m];
    cout << "Enter ELement of array : 1" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter ELement of array : 2" << endl;
    for (j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }
    bool ans = isSubset(n, m, arr1, arr2);
    if (ans)
    {
        cout << "The array is Subset of another array: " << endl;
    }
    else
    {
        cout << "Array is  not a subset of Another array : " << endl;
    }
    return 0;
}